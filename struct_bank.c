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
void deposit(struct bank b);
void withdraw(struct bank b);

void main()
{

	printf("Welcome to ABC bank.\n");
        menu();	

	printf("Enter account no: ");
	scanf("%d",&b.accountno);
	
	//Write the switch case for account number and another switch case for transaction options.
}

void menu()
{
	printf("Enter your account no.\n");
	printf("Check the banlance. Press b\n");
	printf("Deposite the amount. Press d\n");
	printf("Withdraw the amount. Press w\n");
}	

void check_balance(struct bank b)
{
	b.balance = 10000;
	printf("Your current balance is %d", b.balance);
}






  
