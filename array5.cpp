#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,j,n;
	cout<<"\n Enter array size : ";
	cin>>n;
	cout<<"\n Enter Array Elements :\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
		}
			
	}
	for(i=0;i<n;i++)
	cout<<"\n element in array : "<<a[i];
	
	return 0;
}
