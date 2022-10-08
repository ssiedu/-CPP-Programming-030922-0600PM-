#include<iostream>
using namespace std;
class Second;
class First
{
	int v1;
	public:
		void getdata()
		{
			cout<<"\n Enter First value : ";
			cin>>v1;
		}
		void display()
		{
			cout<<"\n value of First variable : "<<v1;
		}
		
		friend void exchange(First & , Second &);
};
class Second 
{
	int v2;
	public:
		void getdata()
		{
			cout<<"\n Enter Second value : ";
			cin>>v2;
		}
		void display()
		{
			cout<<"\n value of Second variable : "<<v2;
		}
		friend void exchange(First &, Second &);
};
void exchange(First &x, Second &y)
{
	int temp=x.v1;
	x.v1=y.v2;
	y.v2=temp;
}

int main()
{
	First f;
	Second s;
	f.getdata();
	s.getdata();
	cout<<"\n Before Exchange : \n";
	f.display();
	s.display();
	exchange(f,s);
	cout<<"\n After Function call : \n";
	f.display();
	s.display();
	return 0;
	
	
	
	
	
}












