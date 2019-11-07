#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float r1, r2;
	float r;
	cin >> r1 >> r2;
	//r = 1/(1/r1 + 1/r2)
	r = 1 / (1 / r1 + 1 / r2);
	cout << fixed << setprecision(2) << r << endl;
	return 0;
}
