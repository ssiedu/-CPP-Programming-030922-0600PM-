#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	char string[20];
	int len,i;
	fstream file;
	file.open("Text.txt",ios::in|ios::out|ios::app);
	cout<<"\n Enter any string : ";
	cin>>string;
	len = strlen(string);
	for(i=0;i<=len;i++)
	file.put(string[i]);
	file.seekg(5);
	char ch;
	while(file)
	{
		file.get(ch);
		cout<<ch;
	}
	
	file.close();
	return 0;
}
