#include<iostream>
using namespace std;
class test
{
	int num;
	static int count;
	public:
		void getnumber(int n)
		{
			num=n;
			count++;
		}
		void display()
		{
			cout<<"\n value of num : "<<num;
			cout<<"\n value of count : "<<count;
			
		}
		
};
int test :: count;
int main()
{
	test t1,t2;
	t1.display();
	t2.display();
	t1.getnumber(100);
	t1.display();
	t2.getnumber(20);
	t2.display();
	return 0;
}
