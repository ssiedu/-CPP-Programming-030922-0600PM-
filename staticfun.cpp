#include<iostream>
using namespace std;
class item
{
	int num;
	static int count;
	public :
		void getdata()
		{
			num=++count;
		}
		void shownum()
		{
			cout<<"\n value of number : "<<num;
		}
		static void showcount()
		{
			cout<<"\n number of count : "<<count;
		}
};
int item :: count; // definition 

int main()
{
	item i1,i2;
	
	i1.getdata();
	i2.getdata();
	item :: showcount();// call of static function
	i1.shownum();//1
	i2.shownum();//2
	item i3;
	i3.getdata();
	item::showcount();
	i3.shownum();
	return 0;	
}







