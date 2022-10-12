#include<iostream>
using namespace std;
class First
{
	protected:
		int num1;
	public:
		void getNum1(int a)
		{
			num1=a;
			
		}
};
class Second
{
	protected:
		int num2;
	public:
		void getNum2(int b)
		{
			num2=b;
			
		}
};
class Third
{
	protected:
		int num3;
	public:
		void getNum3(int c)
		{
			num3=c;
			
		}
};

class derive : public First,public Second,public Third
{
	public:
		void product()
		{
			cout<<"\n product of three numbers : "<<num1*num2*num3;
		}
};

int main()
{
	derive d;
	int m,n,o;
	cout<<"\n Enter three values : ";cin>>m>>n>>o;
	d.getNum1(m);
	d.getNum2(n);
	d.getNum3(o);
	d.product();
	return 0;
}





