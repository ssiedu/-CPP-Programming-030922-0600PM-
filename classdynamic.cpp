#include<iostream>
using namespace std;
class Student
{
	int rollno;
	string name;
	float marks;
	public :
		Student ()
		{
			rollno=101;
			name="Ram";
			marks = 78.87;
		}
		void display()
		{
			cout<<"\n student roll no : "<<rollno;
			cout<<"\n student name : "<<name;
			cout<<"\n student marks : "<<marks;
		}
};
int main()
{
	Student *ptr = new Student();
	ptr->display();
	delete ptr;
	return 0;
}






