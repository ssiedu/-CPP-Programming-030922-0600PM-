#include<iostream>
using namespace std;
int main()
{
	int num;
	float *ptr=NULL;
	cout<<"\n Enter number of student marks : ";
	cin>>num;
	
	ptr= new float[num];
	
	cout<<"\n marks of student : "<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<" student "<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	cout<<"\n Student marks : "<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<" \n student "<<i+1<<" : "<<*(ptr+i);
	}
	
	delete[] ptr;
	return 0;
	
	
	
}
