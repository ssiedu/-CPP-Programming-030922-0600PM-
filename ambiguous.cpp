#include<iostream>
using namespace std;
class Base 
{
	public : 
		void display()
		{
			cout<<"\n In Base class";
		}
};
class Base1
{
	public :
		void display()
		{
			cout<<"\n In class Base1";
		}
};
class derive : public Base , public Base1
{
	public:
		void view()
		{
			Base::display();
			Base1::display();
		}
};
int main()
{
	derive d;
	d.view();
	return 0;
}




