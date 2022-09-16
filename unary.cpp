#include<iostream>
using namespace std;
int main()
{
	int x=4,y;
	//y=x++;// y= 4  x=5
	//y=x--;//y=5  x=4
	//y=++x;//y=5  x=5
	y=--x + ++x; //y=4 x=4 // 4 + 4 =8
	cout<<"value of x : "<<x<<"\n value of y : "<<y;
	return 0;
}
