#include<stdio.h>

void main()
{
	int i,num,sum=0;
	
	
	do
	{
		printf("Enter ther +ve number:\n ");
		scanf("%d",&num);
	}
	while (num <= 0);
	
	for(i=1; i<=num; i++)
	{
		sum = sum + i;
		printf("%d\n",sum);
	}
	printf("Summation:%d\n ",sum);
}

