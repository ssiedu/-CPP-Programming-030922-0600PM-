#include<iostream>
using namespace std;
int fact();// function declaration
int main()
{
	int res = fact();
	cout<<"factorial of a number : "<<res; // function call
	return 0;
}
int fact() // function definition
{
	int n,f=1,i;
	cout<<"\n Enter any number : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f *=i;
	}
	//cout<<"\n factorial of a number :"<<f;
	return f;
}
