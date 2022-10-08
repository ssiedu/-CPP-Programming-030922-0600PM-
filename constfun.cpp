#include<iostream>
using namespace std;
class Number 
{
	int num1, num2,sum;
	public:
		void getdata();
		void display() const
		{
			cout<<"\n value of num1 : "<<num1;
			cout<<"\n value of num2 : "<<num2;
			//sum=num1+ num2;
			cout<<"\n sum of two numbers : "<<sum;
		}
};
void Number :: getdata()
{
	cout<<"\n Enter First Number : ";
	cin>>num1;
	cout<<"\n Enter Second Number : ";
	cin>>num2;
	sum=num1+ num2;
}
int main()
{
	Number n;
	n.getdata();
	n.display();
	return 0;
}
