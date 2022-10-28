#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("C Programming");
	fout<<" Array "<<endl;
	fout<<" Pointer "<<endl;
	fout<<" Function "<<endl;
	fout<<" Structure "<<endl;
	fout.close();
	fout.open("C++ Programming");
	fout<<" Inheritance "<<endl;
	fout<<" Polymorphism "<<endl;
	fout<<" Abstraction "<<endl;
	fout<<" Encapsulation "<<endl;
	fout.close();
	ifstream fin;
	fin.open("C Programming");
	char ch[40];
	cout<<"\n Content of C programming file \n";
	while(fin)
	{
		fin.getline(ch,30);
		cout<<ch<<endl;
	}
	fin.close();
	fin.open("C++ Programming");
	cout<<"\n Content of C++ programming file \n";
	while(fin)
	{
		fin.getline(ch,30);
		cout<<ch<<endl;
	}
	fin.close();
	return 0;
}
