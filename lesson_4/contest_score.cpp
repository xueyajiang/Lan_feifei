#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float score[10];
	float max = 0, min = 100;
	int i_max = 0, i_min = 0;
	float average;
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> score[i];
		if (score[i] > max)
		{
			max = score[i];
			i_max = i;
		}
		if (score[i] < min)
		{
			min = score[i];
			i_min = i;
		}
	}
	score[i_max] = 0;
	score[i_min] = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = sum + score[i];
	}
	cout << fixed << setprecision(2) << sum / 8 << endl;
	return 0;
}
