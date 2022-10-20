#include<iostream>
using namespace std;
template <class T>
class Number 
{
	T num;
	public:
		Number(T n)
		{
			num=n;
		}
		T getNum()
		{
			return num*num;
		}
};
int main()
{
	Number <int> obj1(5);
	int res= obj1.getNum();
	cout<<"\n square of a int number : "<<res;
	
	Number <double> obj2(2.2);
	double res1=obj2.getNum();
	cout<<"\n square of a double number : "<<res1;
	return 0;	
}

