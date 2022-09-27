#include<iostream>
#define pi 3.14
using namespace std;
class Area
{
	//const float pi=3.14;
	float r;
	public:
		void getdata()
		{
			cout<<"\n Enter Radius : ";
			cin>>r;
		}
		void result()
		{
			cout<<"Area of circle : "<<pi*r*r;
		}
	
};
int main()
{
	Area obj;
	obj.getdata();
	obj.result();
	return 0;
}
