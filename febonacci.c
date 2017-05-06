#include<stdio.h>

void main()
{
	int i,num,t1=0,t2=1,nextterm=0;
	
	printf("Enter the number of terms: ");
	scanf("%d",&num);
	
	printf("Fibonacci Series: \n");	
	
	for(i=1;i<=num;i++)
	{
		if(i==1)
		{
			printf("%d ",t1);
			continue;
		}
		if(i==2)
		{
			printf("%d ",t2);
			continue;
		}
		nextterm = t1 + t2;
		t1 = t2;
		t2 = nextterm;
		printf("%d ",nextterm);
	}
	printf("\n");
}

