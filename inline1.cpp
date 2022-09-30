#include<iostream>
using namespace std;
inline void square(int n)
{
	cout<<"\n square of number is : "<<n*n;
}
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	square(num);//cout<<"square of number is : "<<n*n;
	square(5);//cout<<"square of number is : "<<n*n;
	square(2);//cout<<"square of number is : "<<n*n;
	return 0;
}

