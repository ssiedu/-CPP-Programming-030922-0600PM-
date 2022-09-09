#include<stdio.h>
struct employee
{
	int id;
	char name[10];
	float sal;
	void getdata()
	{
	printf("\n Enter Employee id : ");
	scanf("%d",&id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&sal);	
	}
	
	void display()
	{
		printf("\n Employee id : %d",id);
		printf("\n Employee Name : %s",name);
		printf("\n Employee Salary : %.2f",sal);
	}
}emp;

int main()
{
	emp.getdata();
	emp.display();
	return 0;
}
	
	

