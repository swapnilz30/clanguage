#include<stdio.h>

void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);

	switch(num)
	{
		case 1:
			printf("%d",num);
		case 2:
			printf("%d",num);
		default:
			printf("Enter the number only");
	}
}
