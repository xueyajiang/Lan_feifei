#include <iostream>
using namespace std;
int main()
{
	//23.456  23--->10111
//	16 8 4 2 1
//	1  0 1 1 1
//0.456---> 0.456 * 2 = 0.912----0
//          0.912 * 2 = 1.824----1
//          0.824 * 2 = 1.648----1
//          0.648 * 2 = 1.296----1
//          0.296 * 2 = 0.592----0
//          0.592 * 2 =
//0.456--->0.01110
//23.456 --->10111.01110

// 10111.0111
// 1*16 +0*8 + 1*4 + 1*2 + 1*1 + 0*0.5 + 1*0.25 + 1*0.125 + 1*0.0625 = 23.4375
	int a = 1000;//0000 0000 0000 0000 0000 0011 1110 1000
	unsigned char b = 10;
	b = a; //1110 1000===> 232
	printf("%d\n", b);
    
    int n=3.14;
    double l=n;
    cout<<n<<endl<<l<<endl;
    double sum=10.1256;
    double e=(double)sum;
    cout<<sum<<endl<<e<<endl;
    float x=4.8F,y=9.1F;
    int z=(int)(x+y);
    cout<<z<<endl;
    int i=14;
    float f;
    f=static_cast<float>(i);
    cout<<f;
	return 0;
}
