#include <iostream>
using namespace std;
int main()
{
	unsigned long number;
	bool flag = false;
	cin >> number;
	unsigned long temp;
	temp = number;
	unsigned int i = 0;
	unsigned long result = 0;
	unsigned long k = 1;
	while(temp)
	{
	    i = temp % 2;
	    result = k * i + result;
	    k = k * 10;
		temp = temp / 2;
	}
	cout << result << endl;
	return 0;
}
