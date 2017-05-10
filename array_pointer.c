#include<stdio.h>

void main()
{
	int i, num[5];
	
	printf("Enter  elements:\n ");
	
	for (i=0; i<5; i++)
	{
		scanf("%d",num + i);
	}
        
	for(i=0; i<5; i++)
	{
		printf("%d\n", *(num +i));
	}
}
	
