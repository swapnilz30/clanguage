#include<stdio.h>

struct bank
{
	int accountno;
	float amount,balance;
	char trans;
} b1;

void main()
{

	printf("Welcome to ABC bank.");
	
	do
	{
		printf("Enter your account and select the following options");
		printf("Check the banlance. Press b");
		printf("Deposite the amount. Press d");
		printf("Withdraw the amount. Press w");
		
		scanf("%d", &b1.accountno);
		
		switch(b1.accountno)
		{
			case 1:
					
				printf("For transaction select the following options");	
				printf("Check the banlance. Press b");
				printf("Deposite the amount. Press d");
				printf("Withdraw the amount. Press w");

				b1.balance=10000;
				scanf("%c",&b1.trans);
			
				switch(b1.trans)
				{
					case 'b':
						  printf("You have 10000 Rs/- in your account");
						  break;
					case 'd':
						  printf("Enter the amount for deposite.Amount will be not more than 100000 perday.");
					    	  scanf("%f",&b1.amount);
						  if(b1.amount > 100000)
						  {
							printf("Enter amount is more that 100000. Your daily deposite limit is 100000.Please enter less than 100000.");
						  }
						  else
						  {
							
							b1.balance = b1.balance + b1.amount; 		  			
							printf("Your amount is deposited.Now your account balance is: %d",b1.balance); 
						  }
						  break;
					case 'w':
						  printf("Enter the amount to be withdraw.The withdrawal limit is 10000.");
						  scanf("%d", &b1.amount);
						  if(b1.balance > b1.amount)
						  {
							printf("You have insufficient balance.");
						  }
						  else
						  {
							b1.balance = b1.balance - b1.amount;
							printf("The amount %d withdraw.Now you current balance is %d",b1.amount,b1.balance);
						  }
						  break;
					default:
						  printf("For transaction select the following options");	
						  printf("Check the banlance. Press b");
						  printf("Deposite the amount. Press d");
					          printf("Withdraw the amount. Press w");
						  break;	
                                 }
			default:
				printf("Enter correct account number.");
				break;
		   }

	    }while(1);
}

		









  
