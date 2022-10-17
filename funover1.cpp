#include<iostream>
using namespace std;
class Base
{
	int a,b;
	public:
	/*	void getdata()
		{
			cout<<"\n Enter the values of a and b ";
			cin>>a>>b;
		}*/
		int sum(int m , int n)
		{
			a=m;b=n;
			return a+b;
		}
		
};
class derive : public Base
{
	float a,b;
	public:
		float sum(float m, float n)
		{
			a=m;b=n;
			return a+b;
		}
};
int main()
{
	derive d;
	cout<<"\n sum is :"<<d.sum(10,20);
	cout<<"\n Sum in derive : "<<d.sum(12.33f,5.5f);
	return 0;
	
}






