#include<stdio.h>
struct employee
{
	int id;
	char name[10];
	float sal;
}emp;
void main()
{
	printf("\n Enter Employee id : ");
	scanf("%d",&emp.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&emp.name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&emp.sal);
	
	printf("\n Employee id : %d",emp.id);
	printf("\n Employee Name : %s",emp.name);
	printf("\n Employee Salary : %.2f",emp.sal);
	
	getch();
}
