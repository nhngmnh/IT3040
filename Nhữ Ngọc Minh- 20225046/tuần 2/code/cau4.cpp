//cau4
// Nhữ Ngọc Minh - 20225046
#include <stdio.h>
int cube(int x) {
    //# trả về lập phương của x
    /****************
    */
    return x*x*x;
    /*****************/
}
 
//# viết hàm tính lập phương của một số kiểu double
/*****************/
double cube(double x){
    return x*x*x;
}
/**************/
 
int main() {
    int n;
    double f;
    scanf("%d %lf", &n, &f);
    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(f)); // in ra mh
    return 0;
}
