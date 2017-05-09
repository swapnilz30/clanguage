#include<stdio.h>
#include<string.h>

void main()
{
	int i,j;
	char name[20];
	printf("Enter a string: ");
	gets(name);
	
	for(i=0; name[i]!='\0'; i++)
	{
		printf("%c\n",name[i]);
	}
}

