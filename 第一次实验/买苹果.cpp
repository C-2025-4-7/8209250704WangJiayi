#include <iostream>
using namespace std;
int main() {
    int day = 0, num = 2;
    double total = 0, price = 0.8;
    while (num <= 100) {
        total += num * price;
        day++;
        num *= 2;
    }
    double avg = total / day;
    cout << "每天平均花费：" << avg<< endl;
    return 0;
}