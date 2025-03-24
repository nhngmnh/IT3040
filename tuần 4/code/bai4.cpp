//Nhữ Ngọc Minh- 20225046
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
    return a>b;
}
void print_vector(const vector<int> &a) {
    for (int v : a) cout << v << ' ';
    cout << endl;
}

void delete_even(vector<int> &a) {
    auto i=a.begin();
    while(i!=a.end()) 
    {
        if ((*i)%2==0) a.erase(i);
        else i++;
    }
}

void sort_decrease(vector<int> &a) {
    sort(a.begin(),a.end(),compare);
}

vector<int> merge_vectors(const vector<int> &a, const vector<int> &b) {
    vector<int> merge;
    for (int v:a ) merge.push_back(v);
    for (int v:b) merge.push_back(v);
    sort(merge.begin(),merge.end(),compare);
    return merge;
}

int main() {
    int m, n, u;
    std::vector<int> a, b;
    
    std::cin >> m >> n;
    for(int i = 0; i < m; i++){
        std:: cin >> u;
        a.push_back(u);
    }
    for(int i = 0; i < n; i++){
        std:: cin >> u;
        b.push_back(u);
    }

    delete_even(a);
    cout << "Odd elements of a: ";
    print_vector(a);

    delete_even(b);
    cout << "Odd elements of b: ";
    print_vector(b);

    sort_decrease(a);
    cout << "Decreasingly sorted a: ";
    print_vector(a);

    sort_decrease(b);
    cout << "Decreasingly sorted b: ";
    print_vector(b);

    vector<int> c = merge_vectors(a, b);
    cout << "Decreasingly sorted c: ";
    print_vector(c);

    return 0;
}