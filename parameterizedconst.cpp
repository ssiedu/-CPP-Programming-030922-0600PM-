#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		Employee(int n)
		{
			age=n;
		}
};
int main()
{
	Employee e(40);
	Employee e1=40;
	cout<<"\n Age of Employee : "<<e.age;
	cout<<"\n e1 : "<<e1.age;
	return 0;
}
