#include<iostream>
using namespace std;
int main()
{

	int a,b,c;
	cout<<"\n  Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	try 
	{
		if(b==0)
		throw b;
		else if(b>a)
		throw " you can not declare denominator is greater than numerator ";
	
	c=a/b;
	cout<<"\n value of c : "<<c;
	}
	catch(int ex)
	{
		cout<<"\n you can not declare "<<ex<<"as a denominator ";
	}
	catch (char const *ex1)
	{
		cout<<ex1;
	}
	return 0;
	
}
