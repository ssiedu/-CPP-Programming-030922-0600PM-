#include<iostream>
using namespace std;
class Base
{
	protected:
		int num1,num2;
	public:
		void getNum(int a, int b)
		{
			num1=a;
			num2=b;
		}
};

class sum : public Base
{
	public:
		void getSum()
		{
			cout<<"\n sum of two numbers : "<<num1+num2;
		}
};
class sub : public Base
{
	public:
		void getsub()
		{
			cout<<"\n subtraction of two numbers : "<<num1-num2;
		}
};
int main()
{
	sum obj1;
	sub obj2;
	int m,n;
	cout<<"\n Enter two values : ";cin>>m>>n;
	obj1.getNum(m,n);
	obj1.getSum();
	obj2.getNum(m,n);
	obj2.getsub();
	return 0;
}








