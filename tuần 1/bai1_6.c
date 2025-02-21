// Bài 1.6 Nhữ Ngọc Minh- 20225046
#include<stdio.h>
void reversearray(int a[], int size){
    int l = 0, r = size - 1, tmp;
    /*****************
     Nhữ Ngọc Minh- 20225046
    *****************/
    for (int i=l;i<=r/2;i++) // vòng lặp đảo phần tử i cho r-i với i là chỉ số chạy đến giữa mảng
    {
        tmp=a[i];
        a[i]=a[r-i];
        a[r-i]=tmp;
    }
    
}
void ptr_reversearray(int *a, int size){

    int l = 0, r = size - 1, tmp;

    /*****************
    Nhữ Ngọc Minh- 20225046
    *****************/
    for (int i=l;i<=r/2;i++)   // vòng lặp đảo phần tử i cho r-i với i là chỉ số chạy đến giữa mảng 
    {
        tmp=*(a+i);
        *(a+i)=*(a+r-i);
        *(a+r-i)=tmp;
    }
}
int main()
{
    int arr[]={9,6,2,5};
    reversearray(arr,4);
    for (int i=0;i<4;i++) printf("%d ",arr[i]);
    int arr2[]={12,4,-1,5,9};
    ptr_reversearray(arr2,5);
    for (int i=0;i<5;i++) printf("%d ",arr2[i]);
    return 0;
}