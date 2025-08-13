#include<stdio.h>
int main(){
	
	int money=0;
	int choice;
	int deposite, withdraw;
	
	printf("Wlcome to HDFC ATM\n");
	
	printf("1: check balance\n");
	printf("2: Deposit \n");
	printf("3: Withdraw \n");
	printf("4: Exit \n");
	printf("Enter the choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: printf("Your Bank Balance is %d",money);
		       break;
		       
		case 2: printf("Enter the amount that you want to deposite: ");
		        scanf("%d",&deposite);   
				money += deposite;
			    printf("Your amount is successfully deposited.");
				break;  
				
		case 3: printf("Enter the amount that you want to withdraw: ");
		        scanf("%d",&withdraw);   
				money -= deposite;
			    printf("Your amount is successfully withdraw.");
				break;
					
		default: printf("Exited"); 
		        break;			 
	}
	
	return 0;
}
