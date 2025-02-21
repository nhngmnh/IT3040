// Bài 1.4
/* ***********************
    Nhữ Ngọc Minh- 20225046
    
    **********************/
#include<stdio.h>
int counteven(int* arr, int n)
{
    int count =0;
    /* ***********************
    Nhữ Ngọc Minh- 20225046
    
    **********************/
    
    for (int i=0;i<n;i++)   // vòng lặp truy cập các phần tử trong mảng 
    if (*(arr+i)%2==0) count++;// mỗi lần tìm ra số chãn tăng count 1 đơn vị
    return count;
}
int main(){
    int arr[] = {1, 5, 4, 8, 10, 6, 7, 2};
    printf("%d",counteven(arr, 8));
}