#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,n;
	cout<<"\n Enter array size : ";
	cin>>n;
	cout<<"\n Enter Array Elements :\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[0]>a[i])
		{
			a[0]=a[i];
		}
		
	}
	cout<<"\n smallest element in array : "<<a[0];
	
	return 0;
}
