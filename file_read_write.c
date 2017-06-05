#include<stdio.h>
//#include<conio.h>

void main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("one.txt","w");
	printf("Enter the data:\n");
	while( (ch = getchar()) != EOF )
	{
		putc(ch,fp);
	}
	fclose(fp);
	
	fp = fopen("one.txt","r");
	
	while( (ch = getc(fp)) !=EOF )
	{
		printf("%c", ch);
	}
	fclose(fp);
}
			
