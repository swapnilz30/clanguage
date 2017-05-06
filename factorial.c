#include<stdio.h>

void main()
{
	int num, i;
	unsigned long long factorial = 1;

	printf("Enter and integer: \n");
	scanf("%d",&num);
	
	if(num < 0)
	{
		printf("The factorial for negative number does not exist.");
	}
	else
	{
		for(i=1; i<=num; i++)
		{
			factorial *= i;
		}
		printf("Factorial of %d = %llu\n",num,factorial);
	}
}
