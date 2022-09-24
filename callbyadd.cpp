#include<iostream>
using namespace std;
void swap(int *a, int *b);
int main()
{
	int x,y;
	cout<<"\n Enter x : ";cin >>x;
	cout<<"\n Enter y : ";cin>>y;
	cout<<"\n Before Swapping : \n"<<"x : "<<x<<"\n y : "<<y;
	swap(&x,&y);
	cout<<"\n After Swapping : \n"<<"x : "<<x<<"\n y : "<<y;
	return 0;
}
void swap(int *a, int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	cout<<"\n\n a : "<<*a<<"\n"<<" b : "<<*b;
}
