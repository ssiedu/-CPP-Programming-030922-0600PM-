#include<iostream>
using namespace std;
int sum(int a , int b)
{
	return a+b;
}
int sum(int a, int b, int c)
{
	return a+b+c;
}
float sum(float a, float b)
{
	return a+b;
}
float sum(int a , float b)
{
	return a+b;
}
int main()
{
	cout<<"\n First sum fun call : "<<sum(10,20);
	cout<<"\n Second sum fun call : "<<sum(1,2,3);
	cout<<"\n Third sum func call : "<<sum(2.1f,3.4f);
	cout<<"\n Forth sum func call : "<<sum(10,2.1f);
	return 0;
}
