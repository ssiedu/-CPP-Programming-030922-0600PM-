#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		Employee(){
		//age=40;	
		}
		Employee(int n)
		{
			age=n;
		}
		Employee(const Employee &y)
		{
			age=y.age;
		}
};
int main()
{
	Employee e(55);
	Employee e1=e;
	Employee e2(e);
	Employee e3;
	
	cout<<"\n Employee age e : "<<e.age;
	cout<<"\n Employee age e1 : "<<e1.age;
	cout<<"\n Employee age e2 : "<<e2.age;
	cout<<"\n Employee age e3 : "<<e3.age;
	return 0;
}
