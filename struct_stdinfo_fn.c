#include<stdio.h>

struct student
{
	int roll;
	char name[20];
};

void display(struct student stu);

void main()
{
	struct student stu;

	printf("Enter name: ");
	scanf("%s",&stu.name);
	
	printf("Enter roll: ");
	scanf("%d",&stu.roll);

	display(stu);
}

void display(struct student stu)
{
	printf("Name: %s\n",stu.name);
	printf("Rollno: %d\n",stu.roll);
}

