#include<stdio.h>

typedef struct calculation
{
	float num1, num2, result;
	char opt;
} cal;


void main()
{
	cal c;
	printf("Enter the 2 number for calculation with following operators\n");
	printf("+ - / *\n");
	printf("Enter 1st number: ");
	scanf("%f",&c.num1);
	printf("Enter 2nd number: ");
	scanf("%f",&c.num2);
	printf("Enter operator for calculation: ");
	scanf(" %c",&c.opt);
	

	switch(c.opt)
 	{
		case '+':
			c.result = c.num1 + c.num2;
			break;

		case '-':
			c.result = c.num1 + c.num2;
			break;

		case '/':
			c.result = c.num1 / c.num2;
			break;

		case '*':
			c.result = c.num1 * c.num2;
			break;
		
		default:
			printf("Invalid Operator");
			break;
	}
	printf("Result: %f\n",c.result);
}
