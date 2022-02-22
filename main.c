#include<stdio.h>
#include <stdlib.h>

void main() {
 int choice;
 float cash=0;
 char c;
 int ans;
 int pin;

 do{
  printf("********Welcome to BAKA ATM Service**************\n");
  printf("Enter ATM Card\n");//Ask user to enter ATM Card
  printf("Is ATM Card inserted? (Input 1 for Yes and 0 for No)\n");//check if the ATM card has been entered
  scanf("%d", &ans);
  if(ans == 1) {// If statement to execute based on whether ATM card has been entered or not
  printf("Enter PIN Number:");
  scanf("%d", &pin);
   }else {
  while(ans == 0) {
  printf("Insert ATM card\n");
  exit(0);
       }
  }
  printf("********Main Menu**************\n");// User can pick whatever option they require
  printf("Choose preferred option:\n1-Withdraw\n2-Deposit\n3-Check Balance\n4-Transfer Money\n5-Link to Mpesa\n6-Exit\n");
  scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  {
   int withdraw;
   printf("********WITHDRAWAL**************\n");//case statement that executes withdrawal
   printf("Enter Amount to withdraw\n");
   scanf("%d",&withdraw);
   if(withdraw%100==0)// checks to see if amount entered is the 100s value
   {
    if(cash>=withdraw)
        {
        cash-=withdraw;
        printf("Amount After withdrawal of cash is %f\n",cash);
       }
       else{
    printf("You don't have enough Amount to Withdraw.Please Deposit Amount\n");
        }
   }else {
    printf("Enter Withdrawal Amount in 100's\n");
   }
   break;
  }
  case 2:
  {
   int deposit;
   printf("********DEPOSIT**************\n");//shows deposit operation
   printf("Enter Amount to deposit\n");
   scanf("%d",&deposit);
   if(deposit%100==0)//checks if deposit amount is the 100s
   {
       cash=cash+deposit;//adds deposit amount to already existing cash in the bank
       printf("Balance After Depositing Amount is %f\n",cash);
   }
   else
   {
    printf("Please Enter Amount in 100's\n");
   }
   break;
  }
  case 3:
  {
   printf("Balance in the Account is %.2f\n",cash);
   break;
  }
  case 4:
  {
   int transfer;
   int mobile;
   printf("********TRANSFER MONEY**************\n");// transfer funds operation
   printf("Enter Amount to transfer:  ");
   scanf("%d", &transfer);
   printf("Input Mobile Number to send to: ");
   scanf("%d", &mobile);
   if(transfer%100==0)
   {
    if(cash>=transfer)//allows user to transfer funds
        {
        cash-=transfer;
        printf("Balance After Transfer of cash is %f\n",cash);
        printf("%d sent to mobile number %d \n", transfer,mobile);
       }
       else{
    printf("You don't have enough Amount to Transfer.Please Deposit Amount\n");
        }
   }else {
    printf("Enter Transfer Amount in 100's\n");
   }

   break;
  }
  case 5:
  {
   int number;
   printf("********LINK TO MPESA**************\n");//allows user to link to Mpesa
   printf("Enter Mpesa registered mobile number: ");
   scanf("%d", &number);
   printf("Bank account successfully linked to Mpesa mobile %d \n", number);
   printf("You can now send money to and from Mpesa\n");

   break;
  }
  case 6:
  {
   printf("ATM EXITED\n");
   break;
  }

  default :
  {
   printf("Enter Valid Choice\n");
   break;
  }

 }
 printf("To Continue with more Transactions Press 'Y' else any letter\n");//Allows the user to do multiple operations after the first one
 printf("To Exit Press ENTER\n");
 fflush(stdin);
 scanf("%c",&c);

}while(c=='y' || c=='Y');
   printf("Thanks for using our ATM\n");
}
