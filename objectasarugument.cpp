#include<iostream>
using namespace std;
class time
{
	int hour,minute;
	public:
		void gettime(int h, int m)
		{
			hour=h;
			minute=m;
		}
		void display()
		{
			cout<<hour<<" hr "<< " : "<<minute<<" min";
		}
		void sum(time ,time);	
};
void time :: sum(time t1, time t2)
{
	minute= t1.minute+t2.minute;
	hour  = minute/60;
	minute= minute%60;
	hour = hour+t1.hour+t2.hour;
}

int main()
{
	time t1,t2,t3;
	int h1,m1;
	cout<<"Enter hour and minute for t1 : ";
	cin>>h1>>m1;
	
	t1.gettime(h1,m1);
	cout<<"Enter hour and minute for t1 : ";
	cin>>h1>>m1;
	
	t2.gettime(h1,m1);
	t3.sum(t1,t2);
	cout<<"\n t1 time : ";
	t1.display();
	cout<<"\n t2 time : ";
	t2.display();
	cout<<"\n t3 time : ";
	t3.display();
	return 0;
}
