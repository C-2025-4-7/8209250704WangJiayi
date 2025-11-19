#include <iostream>
using namespace std;
int max(int a, int b) {
    int c;
    c = a > b ? a : b;
    return c;
}
int main() {
    double a, xn, xn1;
    cin >> a;
    if (a < 0) {
        cout << "负数没有实数平方根" << endl;
        return 0;
    }
    xn = a;
    do {
        xn1 = 0.5 * (xn + a / xn);
        if (max{ xn1 - xn ,xn-xn1}< 1e-10) {
            break;
        }
        xn = xn1;
    } while (true);
    cout << "平方根为：" << xn1 << endl;
    return 0;
}