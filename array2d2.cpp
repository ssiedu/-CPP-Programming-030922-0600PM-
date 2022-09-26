#include<iostream>
using namespace std;
int main()
{
	int a[5][5];
	int i,j,r,c;
	cout<<"\n Enter row size : ";
	cin>>r;
	cout<<"\n Enter column size : ";
	cin>>c;
	cout<<"\n Enter Array Elements : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"a ["<<i<<"]["<<j<<"] : "; 
			cin>>a[i][j];
		}
	}
	cout<<"\n\n Matrix is : \n\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n\n";
	}
	return 0;
}
