#include<stdio.h>
int main() {
   float x=2.5;
   char *p=&x;
   printf("%d\n",*(p+3));
   return 0;
} 