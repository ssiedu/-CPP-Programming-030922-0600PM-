#include<iostream>
using namespace std;
template <class T , class U=float>
class Add
{
	T Num1;
	U Num2;
	public:
		Add(T n1, U n2)
		{
			Num1=n1;
			Num2=n2;
		}
		void getSum();
};
 template <class T, class U>
 void Add<T,U> :: getSum()
 {
 	U result = Num1+Num2;
 	cout<<"\n Addition of Number : "<<result;
 }
 
 
 int main()
 {
 	Add <int,float> a(2,3.1);
 	a.getSum();
 	return 0;
 }
