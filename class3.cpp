#include<iostream>
using namespace std;
class student
{
	
	int rollno;
	char name[10];
	float marks;
	public:
	void getdata()
	{ 
		cout<<"\n Enter roll no : ";
		cin>>rollno;
		cout<<"\n Enter name : ";
		cin>>name;
		cout<<"\n Enter marks : ";
		cin>>marks;
	}
	
	void display(); // method declaration
	
};

	void student :: display()
	{
		cout<<"\n student roll no : "<<rollno;
		cout<<"\n student name    : "<<name;
		cout<<"\n student marks   : "<<marks;
	}
	
int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}
	
	




