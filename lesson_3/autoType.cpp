#include <iostream>
using namespace std;
int main() 
{
	/* 本次课主要讲解：自动数据类型转换
	                   强制数据类型转换 */
	int a = 3.14;
	double b = (double)a;
	cout << a << endl;
	cout << b << endl;
	float x = 4.8F, y = 9.1F;
	int z = (int)(x + y);
	cout << z << endl;
	int i = 14;
	float f;
	f = static_cast<float>(i);
	cout << f << endl;
	return 0;
}
