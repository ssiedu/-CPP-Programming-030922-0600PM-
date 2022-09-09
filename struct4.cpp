#include<iostream>
using namespace std;
class employee
{
	
	int id;
	char name[10];
	float sal;
	public:
	void getdata()
	{
	cout<<"Enter Employee id : ";
	cin>>id;
	cout<<"Enter Employee Name : ";
	cin>>name;
	cout<<"Enter Employee salary : ";
	cin>>sal;	
	}
	
	void display()
	{
		cout<<"Employee id : "<<id<<endl;
		cout<<"Employee Name :"<<name<<endl;
		cout<<"Employee Salary : "<<sal<<endl;
	}
};

int main()
{
	employee emp;
	emp.getdata();
	emp.display();
	return 0;
}
	
	

