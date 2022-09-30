#include<iostream>
using namespace std;

void test ()
{
	static int a=1;
	cout<<"\n value of a : "<<a;
	a++;
}
int main()
{
	test();
	test();
	return 0;
}
