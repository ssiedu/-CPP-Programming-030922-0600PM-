#include<iostream>
using namespace std;
int count=0;
class Employee
{
	public :
		Employee()
		{
			count++;
			cout<<"\n number of object created : "<<count;
		}
		~Employee()
		{
			count--;
			cout<<"\n number of object destroyed : "<<count;
		}
};
int main()
{
	cout<<"\n In main Function :\n";
	Employee e1,e2,e3,e4;
	{
		cout<<"\n In block One : \n";
		Employee e5;
	}
	{
		cout<<"\n In Block Two : \n";
		Employee e6;
	}
	cout<<"\n Re Enter in Main function : ";
	return 0;
}
