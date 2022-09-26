#include<iostream>
using namespace std;
int main()
{
	int a[5][5],mul[5][5],b[5][5];//sum[i][j]=a[i][j]+b[i][j]
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
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j] += a[i][k] * b[k][j] 	;//mul = mul +a *b
			}
			
		}
	}
	
	cout<<"\n\n Matrix is : \n\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<mul[i][j];
		}
		cout<<"\n\n";
	}
	return 0;
}
