#include <iostream>
using namespace std;
int main() 
{
	/* ���ο���Ҫ���⣺�Զ���������ת��
	                   ǿ����������ת�� */
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
