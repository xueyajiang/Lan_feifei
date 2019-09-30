#include <iostream>
using namespace std;
int const MAX = 10001;
int main()
{
	int num;
	bool lightStatus[MAX];
	int i, j;
	int count = 0;
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
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
