//Nhữ Ngọc Minh-20225046
#include <iostream>
using namespace std;
#define max 1000
int luu[max][max];
int binom(int n, int k) {
    if (k > n) return 0;
    if (k == 0) return 1;
    return binom(n-1, k) + binom(n-1, k-1);
}

int binom2(int n, int k){
    int tmp1,tmp2;
    if(k>n) return 0;
    if (k==0) return 1;
    if (luu[n-1][k]) tmp1=luu[n-1][k];
    else tmp1=binom2(n-1,k);
    if (luu[n-1][k-1]) tmp2=luu[n-1][k-1];
    else tmp2=binom2(n-1,k-1);
    return tmp1+tmp2;
}

int main() {
    int m;
    cin >> m;
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom(n, k));
        printf("\n");
    }
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom2(n, k));
        printf("\n");
    }
    return 0;
}


