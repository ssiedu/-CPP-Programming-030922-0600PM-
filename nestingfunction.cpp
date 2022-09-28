#include<iostream>
using namespace std;
class largest
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of x : ";
			cin>>x;
			cout<<"\n Enter the value of y : ";
			cin>>y;
		}
		void display();
		int max();
};
void largest :: display()
{
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
	cout<<"\n largest value : "<<max();
}
int largest :: max()
{
	if(x>y)
	return x;
	else
	return y;
}
int main()
{
	largest l,l1;
	l.getdata();
	l.display();
	l1.getdata();
	l1.display();
	l.getdata();
	l.display();
	return 0;
}

