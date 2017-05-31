#include<stdio.h>
#include<stdlib.h>

typedef struct menu
{
	int num;
} m;

void main()
{
	m m1;
	printf("Enter number from following menu\n");
	printf("1. First\n");
	printf("2. Second\n");
	printf("3. Third\n");
	scanf("%d",&m1.num);
	do
	{
		printf("1. First\n");
		printf("2. Second\n");
		printf("3. Third\n");
		printf("4. Enter four for exit");
		if(m1.num==1)
		{
			printf("You have entered 1st option in the menu.");
		}
		if(m1.num==2)
		{
			printf("You have entered second option in the menu.");
		}
		if(m1.num==3)
		{
			printf("You have entered 3rd option in the menu.");
		}
		if(m1.num==4)
		{
			exit(0);
		}
		getch();

	} while(1); 
}	
