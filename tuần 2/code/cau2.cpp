//cau2
// Nhữ Ngọc Minh - 20225046
#include <stdio.h> 
void rotate (int &x, int &y, int &z) { 
    int tmp=x;
    x=y;
    y=z;
    z=tmp;
} 
int main() {   
    int x, y, z; 
   scanf("%d%d%d",&x,&y,&z);
    printf("Before: %d, %d, %d\n", x, y, z);   
    rotate(x, y, z);   
    printf("After: %d, %d, %d\n", x, y, z); 
         return 0; 
    
}
