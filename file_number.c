#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num;
	FILE *fptr;
	
	fptr = fopen("one.txt","w");
	
	if(fptr == NULL)
	{
		printf("Error");
		exit(1);
	}
	
	printf("Enter num: ");
	scanf("%d",&num);
	
	fprintf(fptr,"%d\n",num);
	fclose(fptr);

	//Read contents of the file.
	
	if((fptr = fopen("one.txt","r")) == NULL)
	{
		printf("Error opening file.");
		//Program exit if the file pointer returns null.
		exit(1);
	}
	fscanf(fptr,"%d\n",&num);
	printf("n=%d\n",num);	
	fclose(fptr);
}	
		
