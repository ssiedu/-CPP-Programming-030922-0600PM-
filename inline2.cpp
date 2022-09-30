#include<iostream>
using namespace std;
class Max
{
	int x,y;
	public:
		void getdata(int a, int b)
		{
			x=a;
			y=b;
		}
		void largest();
};

 inline void Max :: largest()
 {
 	cout<<"largest value : "<<((x>y)?x:y);
 }
 int main()
 {
 	Max m1;
 	int x,y;
 	cout<<"Enter the value of x : ";
	cin>>x;
	cout<<"Enter the value of y : ";
	cin>>y;
 	m1.getdata(x,y);
 	m1.largest();
 	return 0;
 }
