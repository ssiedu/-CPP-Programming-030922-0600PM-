#include<iostream>
using namespace std;
class Base
{
	public:
		void Hello()
		{
			cout<<"\n In Base class";
		}
};
class derive : public Base
{
	public:
		void Hello()
		{
			cout<<"\n In Derive class ";
		}
};
int main()
{
	derive d;
	d.Hello();
	d.Hello();
	return 0;
}
