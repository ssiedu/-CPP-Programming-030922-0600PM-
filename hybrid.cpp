#include<iostream>
using namespace std;
class First
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

class Second : public First
{
	protected:
		int sum;
	public:
		void getSum()
		{
			sum=num1+num2;
		}
};
class Third 
{
	
	protected:
		int m,n,mul;
	public:
		void getdata(int x, int y)
		{
			m=x;
			n=y;
		}
	public:
		void getmul()
		{
			mul=num1*num2;
		}
};
class forth : public Second , public Third
{
	public:
		void display()
		{
			cout<<"\n sum is : "<<sum;
			cout<<"\n mul is : "<<mul;
		}
};

int main()
{
	forth f;
	int m,n;
	cout<<"\n Enter two values : ";cin>>m>>n;
	f.getNum(m,n);
	f.getSum();
//	f.getdata(m,n);
	f.getmul();
	f.display();
	return 0;
}











