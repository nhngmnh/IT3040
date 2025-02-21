/* ******************
   Nhữ Ngọc Minh 
   mssv: 20225046 
  ******************* */
#include<stdio.h>
int main()
{
    int x,y,z;
    int* ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d",&x,&y,&z);
    printf("\nThe three integers are:\n");
    ptr=&x;
    printf("x = %d\n",*ptr);
   // Nhữ Ngọc Minh- 20225046
    ptr=&y; // gán địa chỉ biến y cho ptr
    printf("y = %d\n",*ptr);//xuất nội dung mà con trỏ ptr trỏ tới
    ptr=&z; // gán địa chỉ biến z cho ptr
    printf("z = %d\n",*ptr); //xuất nội dung mà con trỏ ptr trỏ tới
    return 0;
}
