// Bài 1.3
#include <stdio.h>

int main() {
    int x, y, z;
    int *ptr;
    scanf("%d %d %d", &x, &y, &z);
    printf("Here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z);
    /*****************
   Nhữ Ngọc Minh -20225046
    *****************/
    ptr=&x; // ptr lưu địa chỉ biến x
    (*ptr)+=100; // tăng giá trị con trỏ ptr trỏ tới
    ptr=&y; // ptr lưu địa chỉ biến y
    (*ptr)+=100; // tăng giá trị con trỏ ptr trỏ tới
    ptr=&z; // ptr lưu địa chỉ biến z
    (*ptr)+=100; // tăng giá trị con trỏ ptr trỏ tới
    printf("Once again, here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z);
    return 0;
}   
