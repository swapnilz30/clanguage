#include<stdio.h>
#include<stdlib.h>
// Function: Menu,Deposit, Withdrawal, check balance 

struct bank
{
	int accountno;
	double amount,balance;
	char trans,flag;
};

void menu();
void check_balance(struct bank b);
void deposite(struct bank b);
void withdrawal(struct bank b);
void transaction(struct bank b);

void main()
{

	struct bank b;

	printf("Welcome to ABC bank.\n");

	printf("Enter account no: ");
	scanf("%d",&b.accountno);
	
		transaction(b);
	do
	{
		printf("If you want to continue with trasaction then press c or e for exit.\n");
		scanf(" %c",&b.flag);
		switch(b.flag)
		{
			case 'c': 
				transaction(b);
				break;

			case 'e': 
				exit(0);
				break;

		        default:
				printf("Enter correct option. Press c to continue or Press e for exit.\n");
				break;
		}
	}while(1);	
}

void menu()
{
	printf("Check the banlance. Press b\n");
	printf("Deposite the amount. Press d\n");
	printf("Withdraw the amount. Press w\n");
}	

void check_balance(struct bank b)
{
	printf("Your current balance is %lf\n", b.balance);
}

void deposite(struct bank b)
{
	if(b.amount <= 10000.0000)
	{
		b.balance = b.balance + b.amount;
		printf("Your current balance is: %lf\n", b.balance);
	}
	else
	{
		printf("Deposite limit is less than or = to 10000\n");
	}
}

void withdrawal(struct bank b)
{
	if(b.balance < b.amount || b.amount > 10000.0000) 
	{
		printf("You have insufficient amount\n");
		printf("Daily withdrawal limit is 10000\n");
	}
	else
	{
		b.balance = b.balance - b.amount;
		printf("Your current balance is: %lf\n", b.balance);
	}
}	

void transaction(struct bank b)
{

	switch(b.accountno)
	{
		case 1:
			b.balance = 10000.0000;
			menu();
			scanf(" %c", &b.trans);
			switch(b.trans)
			{
				case 'b':
					check_balance(b);
					break;
				case 'd':
					printf("Enter the amount for deposite.\n");
					scanf("%lf",&b.amount);
					deposite(b);
					break;
				case 'w':
					printf("Enter the amount to withdrawal.\n");
					scanf("%lf",&b.amount);
					withdrawal(b);
					break;
				default:
					printf("Enter correct option for transaction.\n");
					break;
			}

			break;
		default:
			printf("Enter correct account number\n");
			break;
	}
}
