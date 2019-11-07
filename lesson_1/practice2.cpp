#include <iostream>
using namespace std;
long long const MAX = 100001;
int main()
{
	long long num;
	bool lightStatus[MAX];
	long long i, j;
	long long count = 0;
	cin >> num;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num; j++)
		{
		    if (j % i == 0)
	        {
	        	if (lightStatus[j] == true)
				{
					lightStatus[j] = false;
				}
				else
				{
					lightStatus[j] = true;
				}
			}			
		}
	}
	for (i = 1; i <= num; i++)
	{
		if (lightStatus[i] == true)
		{
			cout << i << " ";
			count++;
		}
	}
	cout << endl;
	cout << count << endl;
	return 0;
}
