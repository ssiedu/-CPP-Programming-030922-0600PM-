#include<iostream>
using namespace std;
class sample
{
	float x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of x : ";
			cin>>x;
			cout<<"\n Enter the value of y : ";
			cin>>y;
		}
		friend float mean(sample s);
};
 float mean(sample s)
 {
 	return (s.x+s.y)/2.0;
 }
 int main()
 {
 	sample obj;
 	obj.getdata();
 	cout<<"\n mean value : "<<mean(obj);
 	return 0;
 }



