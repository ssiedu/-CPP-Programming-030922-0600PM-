#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter the value of a :";cin>>a;
	cout<<"\n Enter the value of b :";cin>>b;
	cout<<"\n Enter the value of c :";cin>>c;
	cout<<endl;
	if(a>b && a>c)
	cout<<a<<"  is greater than  "<<b<<" and "<<c<<endl;
	else if(b>c)
	cout<<b<<"  is greater then  "<<a<<" and "<<c<<endl;
	else
	cout<<c<<"  is greater than  "<<a<<" and "<<b<<endl;
	return 0;
}
