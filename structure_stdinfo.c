#include <stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
} s;

void main()
{
	printf("Enter information\n");
	
	printf("Enter name:\n");
	scanf("%s", s.name);
	
	printf("Enter roll number\n");
	scanf("%d", &s.roll);
	
	printf("Enter marks\n");
	scanf("%f", &s.marks);

	printf("Information\n");

	printf("Student Name:\n");
	puts(s.name);
	
	printf("Roll number: %d\n", s.roll);
	printf("Marks : %f\n",s.marks);
}
	

