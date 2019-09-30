#include <iostream>
using namespace std;
int const MAX = 10000;
int main()
{
	int num;
	int index = -1;
	int searchNum;
	int data[MAX];
	int i;
	cin >> num;
	for (i = 0; i < num; i++)
	{
		cin >> data[i];
	}
	cin >> searchNum;
	for (i = 0; i < num; i++)
	{
//		cout << data[i] << " " << searchNum << endl; 
		if (data[i] == searchNum)
		{
			index = i;
			break;
		}
	}
	cout << index << endl;
	return 0;
}
