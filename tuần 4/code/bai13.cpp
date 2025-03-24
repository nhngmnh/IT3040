// Nhữ Ngọc Minh- 20225046
#include<bits/stdc++.h>
using namespace std;
int calculateBalanceSubstringStartedWith(int i,string &s)
{   int result=0,balance=0;
    for (int j=i;j<s.length();j++)
    {
        if (s[j]=='1') balance++;
        else balance--;
        if (balance==0) result++;
    }
    return result;
}
int calculateBalanceSubstring(string &s)
{
    int result=0;
    for (int i=0;i<s.length();i++)
    result+=calculateBalanceSubstringStartedWith(i,s);
    return result;
}
int main()
{   
    string s;
    cin>>s;
    cout<<calculateBalanceSubstring(s);
}