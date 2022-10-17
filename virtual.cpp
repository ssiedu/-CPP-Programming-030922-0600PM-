#include<iostream>
using namespace std;
class Base
{
	public :
		virtual void print()
		{
			cout<<"\n print method in base class";
		}
		void show()
		{
			cout<<"\n show method in base class";
		}
};
class derive : public Base
{
	public :
		void print()
		{
			cout<<"\n print method in derive class";
		}
		void show()
		{
			cout<<"\n show method in derive class";
		}
};
int main()
{
	derive d;
	Base *ptr = &d;
	ptr->print();
	ptr->show();
	
	return 0;
}
