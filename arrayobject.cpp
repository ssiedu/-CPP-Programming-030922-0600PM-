#include<iostream>
using namespace std;
class Employee
{
	 int id;
	 char name[20];
	 float sal;
	 public:
	 	void getdata()
	 	{
	 		cout<<"\n Enter employee id : ";
			cin>>id;
			cout<<"\n Enter Employee name : ";
			cin>>name;
			cout<<"\n Enter Employee salary : ";
			cin>>sal;	
		}
		void display();
};
void Employee :: display()
{
	cout<<"\n Employee id : "<<id;
	cout<<"\n Employee Name : "<<name;
	cout<<"\n Employee salary : "<<sal;
}

int main()
{
	Employee emp[10];
	int n;
	cout<<"\n Enter Number of Employee : ";
	cin>>n;
	cout<<"\n Enter Employee Information : \n";
	for(int i=0;i<n;i++)
	{
		emp[i].getdata();
	}
	cout<<"\n Employee Details : \n";
	for(int i=0;i<n;i++)
	{
		emp[i].display();
	}
	return 0;
}












