//Nhữ Ngọc Minh- 20225046
#include <bits/stdc++.h> 
using namespace std;
struct Node { 
    int data; 
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// push a new element to the beginning of the list
Node* prepend(Node* head, int data) {
    Node* tmp1=new Node(data);
    if (head==NULL) return tmp1;
    else tmp1->next=head;
    /*****************
    # YOUR CODE HERE #
    *****************/
    return tmp1;
}

// print the list content on a line
void print(Node* head) {
    Node* tmp=head;
    while (tmp!=NULL) 
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<"\n";
    /*****************
    # YOUR CODE HERE #
    *****************/
}

// return the new head of the reversed list
Node* reverse(Node* head) {
    
    if (head==NULL) return NULL;
    Node* tmp=head,*tmp1=head->next;
    if (tmp1==NULL) return tmp;
    while(tmp1->next!=NULL) 
    {
        tmp=tmp->next;
        tmp1=tmp1->next;
    };
    tmp->next=NULL;
    tmp1->next=reverse(head);
    /*****************
    # YOUR CODE HERE #
    *****************/
    return tmp1;
}
  
int main() {
    int n, u;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; ++i){
        cin >> u;
        head = prepend(head, u);
    } 
    
    cout << "Original list: ";
    print(head);

    head = reverse(head);
    
    cout << "Reversed list: ";
    print(head);

    return 0; 
}
