#include<iostream>
using namespace std;
class test
{
	int num;
	static int count;
	public:
		void getdata(int x)
		{
			num=x;
			count++;
		}
		void display()
		{
			cout<<"\n Number of count : "<<count;
		}
};
int  test :: count; // definition of static variable
int main()
{
	test t1,t2,t3;
	t1.display();
	t1.getdata(100);
	t2.display();
	t2.getdata(200);
	t2.getdata(300);
	t3.display();
	return 0;
}

