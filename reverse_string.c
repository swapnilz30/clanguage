#include<stdio.h>
#include<string.h>

void main()
{
	int i,j,temp;
	char name[20];
	
	printf("Enter a string: ");
	gets(name);
	
	i=0;
	j=strlen(name) - 1;
	
	while ( i < j )
	{
		temp = name[i];
		name[i] = name[j];
		name[j] = temp;	
		i++;
		j--;
	}
	printf("%s\n",name);
	
}
