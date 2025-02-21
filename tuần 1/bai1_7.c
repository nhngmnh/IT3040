//bài 1.7 - Nhữ Ngọc Minh- 20225046
#include <stdio.h> 
#include <stdlib.h>
 int *a; int n, tmp;  // a lưu mảng, tmp lưu các giá trị tạm thời cho hàm sort, n là số phần tử của mảng 
 int main(){     
     printf("Enter the number of elements: ");     
     scanf("%d", &n); 
    //#Allocate memory   
    a=(int*)malloc(n*sizeof(int));
    /***************** 
    Nhữ Ngọc Minh- 20225046
    *****************/ 
    for(int i = 0; i < n; i++)        
    scanf("%d", a + i);  
    printf("The input array is: \n");    
    for(int i = 0; i < n; i++)         
    printf("%d ", *(a + i));    
    printf("\n"); 
    //#Sort array 
    /***************** 
   Nhữ Ngọc Minh- 20225046
    *****************/ 
    for (int i=0;i<n;i++)  // Sắp xếp nổi bọt
    for (int j=0;j<n-i-1;j++)
    if (*(a+j)>*(a+j+1)) 
    {
        tmp=*(a+j);
        *(a+j)=*(a+j+1);
        *(a+j+1)=tmp;
    }
         printf("The sorted array is: \n");   // in ra màn hình sau khi sort
         for(int i = 0; i < n; i++)    
         printf("%d ", *(a + i));   
         printf("\n"); 
         free(a);     // xóa dữ liệu vùng nhớ tại a
         return 0; 
 }
