#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b, c, p, s;
	cout << "请输入三个数字" << endl;
	cin >> a >> b >> c;
	cout << a << b << c << endl;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "s = " << fixed  << setprecision(1) << s << endl;
	return 0;

}