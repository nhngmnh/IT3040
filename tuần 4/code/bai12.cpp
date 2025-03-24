//Nhữ Ngọc Minh- 20225046
#include<bits/stdc++.h>
using namespace std;
int maxRectangleAreaStartWith(int tmp,vector<int> &h)
{
    int s=h[tmp],minH=h[tmp];
    for (int i=tmp+1;i<h.size();i++)
    {
        if (h[i]<minH) minH=h[i];
        if (s<minH*(i-tmp+1)) s=minH*(i-tmp+1);
    }
    return s;
}
bool desc(int m, int n)
{
    return m>n;
}
int maxRectangleArea(vector<int> &h)
{
    vector<int> area(h.size());
    for (int i=0;i<h.size();i++)
    area.push_back(maxRectangleAreaStartWith(i,h));
    int result=0;
    for (auto i: area) 
    if (i>result) result=i;
    return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int> h(n);
    for (int i=0;i<n;i++)
    cin>>h[i];
    cout<<maxRectangleArea(h);
    return 0;
}