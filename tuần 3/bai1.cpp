//Nhữ Ngọc Minh -20225046
#include<bits/stdc++.h>
using namespace std;
int lucas(int n)
{
 if (n==0) return 2;
else if (n==1) return 1;
else return lucas(n-1)+lucas(n-2);
}
int main()
{
    cout<<lucas(5)<<"\n"<<lucas(10)<<"\n"<<lucas(30);
    return 0;
}
