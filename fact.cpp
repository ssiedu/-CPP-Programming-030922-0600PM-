#include<iostream>
using namespace std;
//void fact();// function declaration
int main()
{
	fact();  // function call
	return 0;
}
void fact() // function definition
{
	int n,f=1,i;
	cout<<"\n Enter any number : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f *=i;
	}
	cout<<"\n factorial of a number :"<<f;
}
