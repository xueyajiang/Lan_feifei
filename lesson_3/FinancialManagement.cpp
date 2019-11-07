#include <iostream>
#include <iomanip>
using namespace std;
const int M = 12;
int main()
{
	double sum = 0;
	double money;
	for (int i = 0; i < M; i++)
	{
		cin >> money;
		sum = sum + money;
	}
	cout << fixed << setprecision(2) <<"$" << sum / M << endl;
	return 0;
}
