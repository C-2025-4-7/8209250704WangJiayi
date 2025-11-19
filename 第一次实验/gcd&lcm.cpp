#include <iostream>
using namespace std;
int main() {
    int a, b, temp, gcd, lcm;
    cin >> a >> b;
    int a_backup = a, b_backup = b;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a;
    lcm = a_backup * b_backup / gcd;
    cout << "最大公约数：" << gcd << endl;
    cout << "最小公倍数：" << lcm << endl;
    return 0;
}