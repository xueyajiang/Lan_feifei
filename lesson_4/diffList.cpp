#include <iostream>
using namespace std;
int main()
{
	int a1, a2, n;
	unsigned int diff;
	cin >> a1 >> a2 >> n;
	diff = a2 - a1;
	//1 3 5 7 9    diff = 2
	//1 4 7 10 13  diff = 3
	//-3 0 3 6 9   diff = 3
	int a;
	a = a1;
	for (int i = 2; i < n; i++)
	{
		a = a + diff;
	}
	a = a + diff;
	cout << a << endl;
	return 0;
}
