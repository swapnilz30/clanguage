#include<stdio.h>

void main()
{
	int num;
        printf("Enter the number\n");
	scanf("%d",&num);	
	fnptr(&num);
}

int fnptr(int *num)
{
	printf("This is the pointer funtion %d\n", num);
}
