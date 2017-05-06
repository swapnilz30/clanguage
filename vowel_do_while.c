#include<stdio.h>
#include<ctype.h>

void main()
{
	char c;
	int isLowercaseVowel,isUppercaseVowel;
	
	do
	{
			
		printf("Enter a character: ");
		scanf("%c",&c);
	}
	while (!isalpha(c));

	isLowercaseVowel = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	isUppercaseVowel = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if ( isLowercaseVowel || isUppercaseVowel )
		printf("%c is vowel\n",c);
	else
		 
		printf("%c is a consonant\n",c);
}
