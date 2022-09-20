#include<iostream>
using namespace std;
int main()
{
	int age;
	AGE:cout<<"\n Eligible for vote";
	cout<<"\n Enter age of person";
	cin>>age;
	if(age>=18)
		goto AGE;
	else
		cout<<"Not eligible for vote";
	
	return 0;
}
