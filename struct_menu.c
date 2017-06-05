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
	do
	{
		scanf("%d",&m1.num);
		switch(m1.num)
		{
			case 1:
				printf("You have entered 1st option in the menu.\n");
				break;
			case 2:
				printf("You have entered 2nd option in the menu.\n");
				break;
			case 3:
				printf("You have entered 3rd option in the menu.\n");
				break;
			case 4:
				exit(0);
				break;
			default: 
				break;
		}
		printf("1. First\n");
		printf("2. Second\n");
		printf("3. Third\n");
		printf("4. Enter four for exit\n");
		getchar();

	} while(1); 
}	
