#include<iostream>
using namespace std;
int fact(int n);// function declaration
int main()
{
	int num; // actual argument
	cout<<"\n Enter any number : ";
	cin>>num;
	cout<<"\n factorial of a number :"<<fact(num);  // function call
	return 0;
}
int fact(int n) // function definition (formal argument)
{
	int f=1,i;
	
	for(i=1;i<=n;i++)
	{
		f *=i;
	}
	return f;
}
