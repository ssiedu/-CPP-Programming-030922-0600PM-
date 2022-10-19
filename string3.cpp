#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str1="Hello ";
	string str2 = "World";
	string str3;
	int len;
	
	
	len = str1.size();
	cout<<"\n string length : "<<len;
	
	str3 = str1 + str2;
	cout<<"\n string concatinate : "<<str3;
	
	str3=str1;
	cout<<"\n string copy : "<<str3;
	
	return 0;
}
