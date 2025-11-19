#include <iostream>
using namespace std;

int main() {
    double a, b, c,x;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double x = a + b + c;
        cout << "周长为：" << x << endl;
        if (a == b || a == c || b == c) {
            cout << "是等腰三角形" << endl;
        }
        else {
            cout << "不是等腰三角形" << endl;
        }
    }
    else {
        cout << "不能构成三角形" << endl;
    }
    return 0;
}