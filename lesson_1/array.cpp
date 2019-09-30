#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解：array 数组 */
	int gifts[8] = {1, 2, 3, 4, 6, 8, 10, 12};
	int n;
	int arr[14];
	while (cin >> n)
	{
	    cout << n << endl;	
	}
	for (int i = 0; i < 14; i++)
	{
		arr[i] = i * 2;
	}
	for (int i = 0; i < 14; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 14; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 14; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	char letters[4] = {'A', 'B', 'C', 'D'};
	double value[5] = {3.142, 1.414, 1.732, 0.125};
	bool yesno[4] = {0, 1, 1, 0};
	return 0;
}
 
