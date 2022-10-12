#include<iostream>
using namespace std;
class Base
{
	protected:
	int num1,num2;
	public:
		void getNumber(int a,int b)
		{
			num1=a;
			num2=b;
		}
};
class Derive : public Base
{
	int sum;
	public:
		void getSum()
		{
			sum=num1+num2;
			cout<<"\n sum of two numbers : "<<sum;
		}
};
int main()
{
	Derive d;
	int m,n;
	cout<<"\n Enter the value of m : ";
	cin>>m;
	cout<<"\n Enter the value of n : ";
	cin>>n;
	d.getNumber(m,n);
	d.getSum();
	return 0;
	
	
	
}
