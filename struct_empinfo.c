#include<stdio.h>
#include<string.h>

struct emp
{
	int age;
	char name[20];
	float sal;
} e;

void main()
{
	printf("Enter age: ");
	scanf("%d", &e.age);
	printf("Enter name: ");
	scanf("%s", &e.name);
	printf("Enter salary: ");
	scanf("%f", &e.sal);

	printf("Age: %d Name: %s Salary: %f\n",e.age,e.name,e.sal);
}

