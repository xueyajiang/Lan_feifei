#include <iostream>
using namespace std;
int main()
{
	int n;
	int array[10];
	int i = 0;
	while (i < 10)
	{
		cin >> n;
		array[i] = n;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	
	return 0;
}
