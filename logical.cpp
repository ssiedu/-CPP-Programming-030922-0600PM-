#include<iostream>
using namespace std;
int main()
{
	int a=21,b=32,c=12;
	cout<<"\n Logical AND : "<<((a>b)&&(b<=c));
	cout<<"\n Logical and not : "<<(!(a<b)&&(a>c));
	cout<<"\n logical OR : "<<((a>b)||(b<=c));
	cout<<"\n Logical and not : "<<(!((a<b)||(a>c)));
	cout<<"\n logical not : "<<((!(a<c)));
	cout<<"\n Logical and or not : "<<((!(a<b)&&(b>c)||(b>a)));
	
}
