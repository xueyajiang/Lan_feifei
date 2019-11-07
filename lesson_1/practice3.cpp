#include <iostream>

using namespace std;
int main()
{
	long long n;
	long long i;
	cin >> n;
	for(i=1; i * i<=n;i++)
    {
		cout<<i*i <<" ";
		cout<<i*i <<" ";
    }
    
	return 0;
}
