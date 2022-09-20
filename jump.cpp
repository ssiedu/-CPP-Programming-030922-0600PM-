#include<iostream>
using namespace std;
int main()
{
	int i;
	//cout<<"\n Break statement "<<endl;
	for(i=2;i<=20;i++)
	{
		/*if(i>=5)
		{
			break;
		}
		cout<<"\t"<<i;*/
		//cout<<"\n Continue statement "<<endl;
		if(i>=5 && i<=15)
		{
			continue;
		}
		cout<<"\t"<<i;
	}
	return 0;
}
