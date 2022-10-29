#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	int rno;
	char name[25];
	float per;
	public:
		void getdata();
		void display();
};
void Student :: getdata()
{
	cout<<"\n Enter Student Roll No : ";
	cin>>rno;
	cout<<"\n Enter Student Name : ";
	cin>>name;
	cout<<"\n Enter Student Percentage : ";
	cin>>per;
}
void Student :: display()
{
	cout<<"\n Student Roll no : "<<rno;
	cout<<"\n Student Name    : "<<name;
	cout<<"\n Student Percentage : "<<per;
}
int main()
{
	Student stu[3];
	int i;
	
	fstream file;
	file.open("StudentData",ios::in|ios::out|ios::app);
	int g = file.tellg();
	int p = file.tellp();
	cout<<"\n position of get pointer : "<<g;
	cout<<"\n position of put pointer : "<<p;
	cout<<"\n Enter Students Information : \n";
	for(i=0;i<3;i++)
	{
		stu[i].getdata();
		file.write((char*)&stu[i],sizeof(stu[i]));
	}
	 g = file.tellg();
	 p = file.tellp();
	cout<<"\n position of get pointer : "<<g;
	cout<<"\n position of put pointer : "<<p;
	file.seekg(0);
	 
	cout<<"\n Details of Student :\n";
	for(i=0;i<3;i++)
	{
		file.read((char*)&stu[i],sizeof(stu[i]));
		stu[i].display();
	}
	file.close();
	return 0;
}





