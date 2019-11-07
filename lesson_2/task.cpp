#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	cin >> n;
	int count[n];
	double average;
	int i = 0;
	int j;
	int score[20];
	while (i < n)
	{
		sum = 0;
		j = 0;
		count[i] = 0;
		cin >> score[j];
		while ((j < 20) && (score[j] != 0))  
		{
			sum = sum + score[j];
			j++;
			cin >> score[j];
		}
		average = (double)sum / j;
		cout << average << " " << j << endl;
		while (j--)
		{
			if (score[j] > average)
				count[i]++;
		}
		i++;
	}
	i = 0;
	while (i < n)
	{
		cout << count[i] << " ";
		i++;
	}
	return 0;
}
