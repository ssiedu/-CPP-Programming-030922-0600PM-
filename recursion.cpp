#include<iostream>
using namespace std;
int natural(int n);
int main()
{
	int num;
	cout<<"\n Enter number : ";
	cin>>num;
	cout<<"sum is : "<<natural(num);
	return 0;
}
int natural(int n)//5
{
	if(n==0)
	  return 1;
	else
	  return n*natural(n-1); 
}

