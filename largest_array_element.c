#include<stdio.h>

void main()
{
	int i,a[4],num;
	
	printf("Enter 4 elements of array\n");

	for(i=1;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{	
		if(a[0] < a[i])
		{
			a[0] = a[i];
		}
	}
	printf("%d\n",a[0]);
}

	
	
	
