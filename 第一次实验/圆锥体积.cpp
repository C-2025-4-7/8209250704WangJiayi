#include<iostream>
using namespace std;
int main() {
	const double pi = 3.14;
	cout << "请输入圆锥底的半径和锥高";
	double r, h;
	cin >> r >> h;
	double V = pi * r * r * h / 3;
	cout << "圆锥的体积为：" << V;
	return 0;

}