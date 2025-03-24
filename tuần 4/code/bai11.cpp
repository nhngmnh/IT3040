//Nhữ Ngọc Minh- 20225046
#include<bits/stdc++.h>
using namespace std;
int minNumberEnteredTheCastle(vector<pair<int,int>> &a,int n, int s,int tmp)
{   if (tmp>=n) return 0;
    if (s==0) 
{   int result=0;
    for (int j=tmp;j<n;j++) result+=a[j].first;
    return result;
}
    int tmp1=a[tmp].first/a[tmp].second;
    if (s<=tmp1) return (tmp1-s)*a[tmp].second+ minNumberEnteredTheCastle(a,n,0,tmp+1);
    return min(minNumberEnteredTheCastle(a,n,s-tmp1,tmp+1)+a[tmp].first-tmp1*a[tmp].second,minNumberEnteredTheCastle(a,n,s-(tmp1+1),tmp+1));
}
bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.first>b.first;
}
int main()
{
    int n,s;
    cin>>n>>s;
    vector<pair<int,int>> a;
    for (int i=0;i<n;i++)
    {   int tmp1,tmp2;
        cin>>tmp1>>tmp2;
        a.push_back({tmp1,tmp2});
    }
    sort(a.begin(),a.end(),compare);
    cout<<minNumberEnteredTheCastle(a,n,s,0);
    return 0;
}
