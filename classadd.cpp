#include<iostream>
using namespace std;
class Addition
{
	private:
		int F_Number,S_Number,sum;
	public:
	void getdata()
	{
		cout<<"\n Enter First Number : ";
		cin>>F_Number;
		cout<<"\n Enter Second Number : ";
		cin>>S_Number;	
	}	
	int calculate()
	{
		//int sum;
		sum=F_Number+S_Number;
		return sum;
		//cout<<"\n sum is : "<<sum;
	}
	/*void display()
	{
		cout<<"\n sum is : "<<sum;
	}*/
}b;//global object
int main()
{
	Addition a;//local object
	
	a.getdata();
	cout<<"sum is : "<<a.calculate();
	b.getdata();
	cout<<"sum is : "<<b.calculate();
	//a.display();
	return 0;
}








