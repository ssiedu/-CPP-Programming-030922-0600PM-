#include<iostream>
using namespace std;
void fact(int n);// function declaration
int main()
{
	int num; // actual argument
	cout<<"\n Enter any number : ";
	cin>>num;
	fact(num);  // function call
	return 0;
}
void fact(int n) // function definition (formal argument)
{
	int f=1,i;
	
	for(i=1;i<=n;i++)
	{
		f *=i;
	}
	cout<<"\n factorial of a number :"<<f;
}
