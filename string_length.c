#include<stdio.h>

void main()
{
	int i,count=0;
	char str[100];

	printf("Enter a string: ");
	//scanf("%s", str);
	gets(str);

	for(i=0; str[i]!='\0'; i++);
	
	printf("%d\n",i);
}
