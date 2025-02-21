//cau6
//Nhữ Ngọc Minh- 20225046
#include <stdio.h>
void print(int n) { // in n
    printf("n=%d\n", n);
}
 
int mul3plus1(int n) { // nhan3+1
    return n * 3 + 1;
}
 
int div2(int n) { //chia2
    return n / 2;
}
 
void simulate(int n, /*****************/ int (*odd)(int), int (*even)(int), void (*output)(int)/*****************/) 
{
    (*output)(n);
    if (n == 1) return;
    if (n % 2 == 0) {
        n = (*even)(n);
    } else {
        n = (*odd)(n);
    }
    simulate(n, odd, even, output);
}
 
int main() {
    int (*odd)(int) = NULL; //khaibao
    int (*even)(int) = NULL;
 
    odd = mul3plus1;
    even = div2;
 
    int n;
    scanf("%d", &n); //doc n
    simulate(n, odd, even, print); // goi ham chung minh
 
    return 0;
}
