#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a;
	cout << "请输入华氏度：";
	cin >> a;
	double b = (a - 32) * 5 / 9;
	cout << "转化成摄氏度为：" << fixed<<setprecision(2)<<b;
	return 0;

}