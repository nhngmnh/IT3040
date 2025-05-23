//Nhữ Ngọc Minh- 20225046
// #include <iostream>
// #include <cmath>
// #include <iomanip>
// #include <utility>
// using namespace std;
// using Point = pair<double, double>;
double distance(Point a,Point b)
{
    return sqrt((a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second));
}
double area(Point a, Point b, Point c) {
    double ab=distance(a,b),bc=distance(b,c), ca=distance(c,a);
    double p=(ab+bc+ca)/2;
    return sqrt(p*(p-ab)*(p-bc)*(p-ca));
}

// int main() {
//     cout << setprecision(2) << fixed;
//     cout << area({1, 2}, {2.5, 10}, {15, -5.25}) << endl;
//     return 0;
// }