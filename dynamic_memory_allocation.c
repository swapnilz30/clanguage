#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, num;
	float *data;
	
	printf("Enter the total number of element(1 to 100): ");
	scanf("%d",&num);
	
	//Allocate the memory of num elements.
	data = (float*) calloc(num,sizeof(float));

	if(data == NULL)
	{
		printf("Error. Memory not alloted");
		exit(0);
	}

	printf("\n");
	
	//Store the number enter by the user.
	for(i=0; i < num ; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%d", data + 1);
	}	
	
	//Loop to store largest number at address data.
	for(i = 1; i < num; i++)
	{
		//change < to > if you want to find smallest number.
		if(*data < *(data + i))
		{
			*data = *(data + i);
		}
	}
	printf("Largest element = %.2f\n", *data);
}
