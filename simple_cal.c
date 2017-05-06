#include<stdio.h>

void main()
{
	char operator;
	double firstnumber, secondnumber;

	printf("Enter an operator(+ - * /): ");
	scanf("%c",&operator);
	
	printf("Enter two operands: ");
	scanf("%lf %lf",&firstnumber,&secondnumber);

	switch(operator)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n",firstnumber, secondnumber, firstnumber + secondnumber);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n",firstnumber, secondnumber, firstnumber - secondnumber);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n",firstnumber, secondnumber, firstnumber * secondnumber);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n",firstnumber, secondnumber, firstnumber / secondnumber);
			break;
		default:
			printf("Error! operator is not correct\n");
	}
}
