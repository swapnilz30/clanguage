#include<stdio.h>

// Function: Menu,Deposit, Withdrawal, check balance 

struct bank
{
	int accountno;
	float amount,balance;
	char trans;
};

void menu();
void check_balance(struct bank b);
void deposite(struct bank b);
void withdrawal(struct bank b);

void main()
{

	struct bank b;

	printf("Welcome to ABC bank.\n");

	printf("Enter account no: ");
	scanf("%d",&b.accountno);
	
	switch(b.accountno)
	{
		case 1:
			b.balance = 10000.00;
			menu();
			scanf(" %c", &b.trans);
			switch(b.trans)
			{
				case 'b':
					check_balance(b);
					break;
				case 'd':
					printf("Enter the amount for deposite.\n");
					scanf("%f",&b.amount);
					deposite(b);
					break;
				case 'w':
					printf("Enter the amount to withdrawal.\n");
					scanf("%f",&b.amount);
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
	//Write the switch case for account number and another switch case for transaction options.
}

void menu()
{
	printf("Check the banlance. Press b\n");
	printf("Deposite the amount. Press d\n");
	printf("Withdraw the amount. Press w\n");
}	

void check_balance(struct bank b)
{
	printf("Your current balance is %f\n", b.balance);
}

void deposite(struct bank b)
{
	b.balance = b.balance + b.amount;
	printf("Your current balance is: %f\n", b.balance);
}

void withdrawal(struct bank b)
{
	if(b.balance < b.amount) 
	{
		printf("You have insufficient amount\n");
	}
	if(b.balance > 10000)
	{
		printf("Daily withdrawal limit is 10000\n");
	}
	if(b.balance >= b.amount)	
	{
		b.balance = b.balance - b.amount;
		printf("Your current balance is: %f\n", b.balance);
	}
}	






  
