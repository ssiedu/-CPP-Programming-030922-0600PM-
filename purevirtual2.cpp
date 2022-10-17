#include<iostream>
using namespace std;
class Area
{
	public:
		virtual float calculateArea()=0;
};
class square : public Area
{
	float a;
	public:
		square(float x)
		{
			a=x;
		}
		float calculateArea()
		{
			return a*a;
		}
};
class circle : public Area
{
	float r;
	public:
		circle(float y)
		{
			r=y;
		}
		float calculateArea()
		{
			return 3.14*r*r;
		}
};
class rect : public Area
{
	float l,b;
	public:
		rect ( float x, float y)
		{
			l=x;
			b=y;
		}
		float calculateArea()
		{
			return l*b;
		}
};
int main()
{
	Area *a;
	square s(2.1);
	circle c(2);
	rect r(2.1,2.2);
	
	a=&s;
	float res1=a->calculateArea();
	cout<<"\n Area of square : "<<res1;
	
	a=&c;
	float res2=a->calculateArea();
	cout<<"\n area of circle : "<<res2;
	
	a=&r;
	float res3=a->calculateArea();
	cout<<"\n area of rectangle : "<<res3;
	
	return 0;
		
}

