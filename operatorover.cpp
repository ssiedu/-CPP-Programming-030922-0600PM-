//operator overloading ++ 
#include<iostream>
using namespace std;
class count
{
	int value;
	public:
		count()
		{
			value=5;
		}
		void operator ++()
		{
			value=value+3;
		}
		void display()
		{
			cout<<"\n value is : "<<value;
		}
};
int main()
{
	count c;
	++c; // operator call
	c.display();
	return 0;
}
