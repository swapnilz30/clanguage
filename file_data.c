#include<stdio.h>

void main()
{
	FILE *fptr;
	char name[20];
	int age;
	float salary;
	
	fptr = fopen("emp.rec","w");
	
	if(fptr == NULL)
	{
		printf("File does not exit \n");
		return;
	}

	printf("Enter name:\n");
	scanf("%s",name);
	
	fprintf(fptr,"Name=%s\n",name);
	
	printf("Enter age:\n");
	scanf("%d",&age);
	
	fprintf(fptr,"Age=%d\n",age);
	
	printf("Enter salary:\n");
	scanf("%f",&salary);

	fprintf(fptr,"Salary=%f\n",salary);
	fclose(fptr);
}	
