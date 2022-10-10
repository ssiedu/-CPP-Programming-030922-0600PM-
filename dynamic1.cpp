#include<iostream>
using namespace std;
int main()
{
	int *pointInt;
	float *pointFloat;
	
	//dynamic memory allocation
	
	pointInt = new int;
	pointFloat=new float;
	
	*pointInt=45;
	*pointFloat =34.56f;
	
	cout<<"\n value of integer pointer : "<<*pointInt;
	cout<<"\n Value of float pointer   : "<<*pointFloat;
	
	delete pointInt;
	delete pointFloat;
	
	return 0;
	
}
