#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int n,i;
	cout<<"\n Enter Array Size : ";
	cin>>n;
	cout<<"\n Enter array Elements : ";
	for(i=0;i<n;i++)
	{
		cout<<"\narr"<<"["<<i<<"]"<<" : ";
		cin>>arr[i];
	}
	cout<<"\n Array Elements : \n";
	for(int i=0;i<n;i++)
	{
		cout<<"\narr"<<"["<<i<<"]"<<" : "<<arr[i];
	}
	
	/*cout<<"\narr[1] : "<<arr[1];
	cout<<"\narr[2] : "<<arr[2];
	cout<<"\narr[3] : "<<arr[3];
	cout<<"\narr[4] : "<<arr[4];
	cout<<"\narr[5] : "<<arr[5];*/
	return 0;
}
