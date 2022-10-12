#include<iostream>
using namespace std;
class First
{
	protected:
		int num1,num2;
	public:
		void getNumber(int a, int b)
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

class Third : public Second
{
	public:
		void display()
		{
			cout<<"\n sum is :"<<sum;
		}
};
int main()
{
	Third t;
	int m,n;
	cout<<"\n Enter the value of m : ";cin>>m;
	cout<<"\n Enter the value of n : ";cin>>n;
	t.getNumber(m,n);
	t.getSum();
	t.display();
	return 0;
}










