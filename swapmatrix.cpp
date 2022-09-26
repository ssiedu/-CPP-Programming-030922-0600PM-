#include<iostream>
using namespace std;
int main()
{
	int a[5][5],b[5][5];//sum[i][j]=a[i][j]+b[i][j]
	int i,j,k,r,c;
	cout<<"\n Enter row size : ";
	cin>>r;
	cout<<"\n Enter column size : ";
	cin>>c;
	cout<<"\n Enter First matrix Elements : \n";
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			//cout<<"a ["<<i<<"]["<<j<<"] : "; 
			cin>>a[i][j];
		}
	}
	cout<<"\n Enter Second matrix Elements : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			//cout<<"b ["<<i<<"]["<<j<<"] : "; 
			cin>>b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=a[i][j]+b[i][j];
			b[i][j]=a[i][j]-b[i][j];
			a[i][j]=a[i][j]-b[i][j];
		}
	}
	
	cout<<"\n\n First Matrix is : \n\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n\n";
	}
	cout<<"\n\n Second Matrix is : \n\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\n\n";
	}
	return 0;
}
