#include<stdio.h>

void cyclicSwap(int *a,int *b,int *c);

void main()
{
	int a,b,c;
	
	printf("Enter a, b and c respectively: ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("Value before swapping:\n");
	printf("a = %d \nb = %d \nc = %d\n",a,b,c);	
	
	cyclicSwap(&a,&b,&c);
	
	printf("Value after swapping:\n");
        printf("a = %d \nb = %d \nc = %d\n",a, b, c);
}

void cyclicSwap(int *a,int *b, int *c)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
