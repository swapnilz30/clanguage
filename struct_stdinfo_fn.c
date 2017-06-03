#include<stdio.h>

struct student
{
	int roll;
	char name[20];
	float marks;
};

void display(struct student stu);

void main()
{
	struct student stu;

	
	printf("Enter name: ");
	scanf("%s",&stu.name);
	
	/*printf("Enter roll: ");
	scanf("%d",&stu.roll);*/
	stu.roll=1;
	stu.marks=80.00;

	display(stu);
}

void display(struct student stu)
{
	printf("Name: %s\n",stu.name);
	printf("Rollno: %d\n",stu.roll);
	printf("Marks: %f\n",stu.marks);
}

