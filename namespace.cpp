#include<iostream>
//using namespace std;
namespace First
{
	void Hello()
	{
		std::cout<<"\n Hello in First namespace ";
	}
}
namespace Second 
{
	void Hello1()
	{
		std::cout<<"\n Hello in Second Namespace";
	}
}
using namespace First;
using namespace Second;
int main()
{
	Hello();
	Hello1();
	return 0;
}
