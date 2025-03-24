 // Cau 8 
//Nhữ Ngọc Minh- 20225046
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
int main() {
    int val1, val2;
    cin >> val1 >> val2;
    vector< vector<int> > a = {
        {1, 3, 7},
        {2, 3, 4, val1},
        {9, 8, 15},
        {10, val2},
    };
    sort(a.begin(), a.end(), [](vector<int> x,vector<int> y){    //hàm nặc danh được định nghĩa sort theo chiều giảm
        int sum1=0,sum2=0;
        for (auto m:x)
        sum1+=m;
        for (auto n:y)
        sum2+=n;
        return sum1>sum2;
    });
    /*****************/
 
    for (const auto &v : a) { // in
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
