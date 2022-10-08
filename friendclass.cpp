#include<iostream>
using namespace std;
class ABC ; // forward declaration of class
class XYZ
{
	int x;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of x : ";
			cin>>x;
		}
		friend void largest(XYZ,ABC);
};
class ABC
{
	int y;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of y : ";
			cin>>y;
		}
		friend void largest(XYZ,ABC);
};
 void largest(XYZ m , ABC n)
 {
 	if(m.x>n.y)
 		cout<<"\n largest value is : "<<m.x;
 	else
 		cout<<"\n largest value is : "<<n.y;
 }
int main()
{
	XYZ xyz;
	ABC abc;
	xyz.getdata();
	abc.getdata();
	largest(xyz,abc);
	return 0;
	
	
	
	
}










