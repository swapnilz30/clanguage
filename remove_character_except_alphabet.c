#include<stdio.h>
#include<string.h>

void main()
{
	char line[20];
	int i,j;
	printf("Enter a string\n");
	gets(line);
	
	for(i=0; line[i]!='\0';i++)
	{
		while(! ( (line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z') || line[i] == '\0') )
		{
			printf("%c\n",line[i]);
			for(j=i; line[j]!='\0';j++)
			{
				line[j]=line[j+1];
				printf("%c\n",line[j]);
			}
			line[j] = '\0';
		}
	}
	printf("Output String: ");
	puts(line);
}
