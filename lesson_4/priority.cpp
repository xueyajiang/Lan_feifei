#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解：运算优先级
	                   运算结合性 */
	int a = 12, b = 3;
	char c = 'a';
	float d = 3.51;
	long long e = 1000000000;
	double f = 999999999.99, x, y, z;
	x = a + c + b * d - f / e;
	y = (int)3.999 + (int) 4.001;
	z = (double)102 + '9';
	cout << x << ' ' << y << ' ' << z << endl;
	return 0;
}
