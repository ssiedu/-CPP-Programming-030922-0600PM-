#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
char* filename = "Binary";
int main()
{
	ofstream fout(filename);
	int i;
	float height[4]={123.55,345.77,88.55,456.78};
	fout.write((char*)&height,sizeof(height));
	fout.close();
	ifstream fin(filename);
	for(i=0;i<4;i++)
	height[i]=0;
	fin.read((char*)&height,sizeof(height));
	for(i=0;i<4;i++)
	{
		cout<<fixed;
		cout<<setw(10)<<setprecision(2)<<height[i];
	}
	fin.close();
	return 0;
	
}
