#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[10] = "Hello ";
	char str2[10] = "World";
	char str3[20];
	int len;
	
	
	len = strlen(str1);
	cout<<"\n length of string : "<<len;
	
	strcat(str1,str2);
	cout<<"\n string concatenation : "<<str1;
	
	strcpy(str3,str1);
	cout<<"\n string copy : "<<str3;
	
	if(strcmp(str1,str2)==0)
	cout<<"\n strings are equal ";
	else
	cout<<"\n Strings are not equal ";
	
	cout<<"\n str1 in upper : "<<strupr(str1);
	cout<<"\n str1 in lower : "<<strlwr(str1);
	cout<<"\n str1 in reverse : "<<strrev(str1);

	return 0;	
}

