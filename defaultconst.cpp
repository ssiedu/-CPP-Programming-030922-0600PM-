#include<iostream>
using namespace std;
class Employee
{
	int age;
	public:
		
		Employee()
		{
			age=40;
		}
		void display()
		{
			cout<<"\n age of employee : "<<age;
		}
		
};
int main()
{
	Employee e;
	e.display();
	//cout<<"\n age of Employee : "<<e.age;
	return 0;
}
