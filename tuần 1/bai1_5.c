//bài 1.5 - Nhữ Ngọc Minh - 20225046
#include<stdio.h>
double* maximum(double* a, int size){

    double *max;

    max = a;

    if (a==NULL) return NULL;



    /*****************

    Nhữ Ngọc Minh - 20225046

    *****************/

    for (int i=1;i<size;i++) // Vòng lặp truy cập nhằm so sánh các phần tử mảng a với nội dung max trỏ tới
    if (*(a+i)>*max) max=a+i; // nếu giá trị tại phần tử bất kỳ lớn hơn tại max thì gán lại địa chỉ

    return max;
}
int main(){
    double arr[] = {1., 10., 2., -7., 25., 3.};
    double* max = maximum(arr, 6);
    printf("%.0f", *max);
    return 0;
}