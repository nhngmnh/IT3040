// bài 1.9 Nhữ Ngọc Minh 20225046
 #include <stdio.h> 
#include<stdlib.h> 
void printsubarray(int* a ,int l,int r) 
// hàm in dãy con:chọn dãy con bắt đầu từ phần tử l đến phần tử r
 // ( r cố định và bằng n-1) 
{ 
if (l<=r) 
{
 for (int tmp=r;tmp>=l;tmp-- ) 
{ for (int i=l;i<=tmp;i++) 
printf("%d ",a[i]); 
printf("\n"); 
}
 printsubarray(a,l+1,r); 
} 
} 
int main() 
{
 int n;
 scanf("%d",&n); 
int* a=(int*)malloc(n*sizeof(int));
 for (int i=0;i<n;i++) scanf("%d",&a[i]);
 printsubarray(a,0,n-1);
 return 0; 
}
