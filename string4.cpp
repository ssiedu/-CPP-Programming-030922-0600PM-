#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[10];
	char str2[10];
	cout<<"\n Enter String first ";
	cin.getline(str1,6);
	cout<<"\n Enter Second string : ";
	cin.getline(str2,3);
	strcat(str1,str2);
	cout<<"\n string concatination : "<<str1;
	return 0;
}
