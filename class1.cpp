#include<iostream>
using namespace std;
class Employee
{
	int id;
	char name[20];
	public:
	void input()
	{
		cout<<"Enter Employee id : ";
		cin>>id;
		cout<<"Enter Employee Name : ";
		cin>>name;
	}
	void output()
	{
		cout<<"Employee Id  : "<<id<<endl;
		cout<<"Employee Name : "<<name<<endl;
	}
};//global

int main()
{
	Employee e;// local object
	e.input();
	e.output();
	return 0;
	//getch();
}
