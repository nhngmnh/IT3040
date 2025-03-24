//cau12
//Nhữ Ngọc Minh- 20225046
#include<bits/stdc++.h>
using namespace std;
struct cap{
    int key;
    int value;
    friend ostream& operator<<(ostream& os, cap tmp)
    {
        os<<tmp.key<<" "<<tmp.value;
        return os;
    }
};

int main()
{   
    int n,tmp1,tmp2;
    cout<<"Nhập số cặp: n= ";
    cin>>n; cap a[n];
    for (int i=0;i<n;i++)
    {
        cin>>tmp1>>tmp2;
        a[i].key=tmp1;
        a[i].value=tmp2;
    }
    sort(a,a+n,[](cap v1,cap v2){
        if (v1.value!=v2.value) return v1.value>v2.value;
        else return v1.key>v2.key;
    }
    );
    cout<<"Output: \n";
    for (auto i: a) cout<<i<<"\n";
    return 0;
}
