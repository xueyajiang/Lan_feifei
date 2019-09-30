#include <iostream>
using namespace std;
int main()
{
	/* 1 2  3  4-----------------------------1(4)
	   3 4  5  6  7  8-----------------------2(6)
	   5 6  7  8  9  10 11 12----------------3(8)
	   7 8  9  10 11 12 13 14 15 16----------4(10)
	   9 10 11 12 13 14 15 16 17 18 19 20----5(12) */
	int start = 1;
	int end = 4;
	int offset = 4;
	int i, j;
	for (i = 1; i <= 97; i++)
	{
		for (j = start; j <= end; j++)
		{
			if (i == 97)
			{
				cout << j << " ";
			}

		}
		if (i == 97)
		{
			cout << endl;
		}

		start = start + 2;
		end = offset * (i + 1);
	}
	return 0;
} 
