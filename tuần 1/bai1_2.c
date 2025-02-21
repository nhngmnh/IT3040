//bai 1.2 Nhữ Ngọc Minh - 20225046 
#include<stdio.h>
 int main() 
{ 
int a[7]= {13, -355, 235, 47, 67, 943, 1222}; 
printf("address of first five elements in memory.\n"); 
for (int i=0; i<5;i++) 
printf("\ta[%d] ",i); 
printf("\n"); 
/***************** 
Nhữ Ngọc Minh - 20225046 
****************/ 
for (int i=0;i<5;i++)  // in ra địa chỉ 5 phần tử đầu tiên trong mảng a 
printf("%p\n",a+i);
 return 0;
 }
