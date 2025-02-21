//cau11
//Nhữ Ngọc Minh -20225046
#include<bits/stdc++.h>
using namespace std;
struct Poly{
    int bac;
    vector<int> heso;

    Poly(int degree) {
        bac=degree;
        heso.resize(degree+1);
    }
    
};
 Poly operator*(Poly a,Poly b)
{   Poly ketqua(a.bac+b.bac);
    
    for (int i=0;i<=a.bac;i++)
    for (int j=0;j<=b.bac;j++)
    {
        ketqua.heso[i+j]+=a.heso[i]*b.heso[j];
    }
    return ketqua;
}
int main()
{
    int n,m,tmp;
   
    cin>>n; Poly a(n);
    for (int i=0;i<=n;i++) 
    {
       cin>>tmp; a.heso[i]=tmp; 
    }
    cin>>m; Poly b(m);
    for (int i=0;i<=m;i++) 
    {
       cin>>tmp; b.heso[i]=tmp; 
    }
    Poly mul(m+n);
    mul=a*b;
    int tmp2=mul.heso[0];
    for (int i=1;i<=m+n;i++)
    tmp2=(tmp2^mul.heso[i]);
    cout<<tmp2;
    return 0; 
}
