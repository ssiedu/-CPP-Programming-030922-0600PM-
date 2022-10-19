#include<iostream>
using namespace std;
template <typename T> T add (T n1 , T n2)
{
	T result = n1+n2;
	return result;
}

int main()
{
	int i=10,j=20;
	float m=12.3,n=4.5;
	cout<<"Addition of integer value : "<<add(i,j);
	cout<<"\n Addition of float value : "<<add(m,n);
	return 0;
}
