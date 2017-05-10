#include<stdio.h>

void main()
{
	int i,frequency=0;
	char str[100],ch;
	
	printf("Enter a string: ");
	gets(str);

	printf("Enter a chracter: ");
	scanf("%c",&ch);
	
	for ( i=0; str[i] !='\0'; i++)
	{	
		if(ch == str[i])
		{
			frequency++;
		}
	}
	printf("%d\n", frequency);
}
	 
