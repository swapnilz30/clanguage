#include <stdio.h>

void main()
{
	int num;
	printf("Enter the number 1 or 2 and 0 for exit");
	
	do
	{
		scanf("%d",&num);
		switch(num)
		{
			case 1:
			     	printf("Enter number is %d\n", num);
				break;
			case 2:
			     	printf("Enter number is %d\n", num);
				break;
			default:
				printf("Press 0 for exit\n");
		} 
	}
	while(num!=0);
	
}
