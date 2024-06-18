#include<stdio.h>
#include<conio.h>
void main()
{
    int balance = 0,deposit,withdraw;
    float ci;
    int ch;
    char act_customer_name[10];
    int act_number[5];
    
    while(1){
        printf("\n $$$ WELCOME TO STATE BANK OF INDIA");
        printf("\n 1. create new account");
        printf("\n 2. Deposit");
        printf("\n 3. withdraw");
        printf("\n 4. Balanace");
        printf("\n 5. Interest");
        printf("\n 6. cash receipt");
        printf("\n 7. Quit");
        printf("\n  Enter choice  ");
        scanf("%d",&ch);
switch(ch){
    case 1:
    printf("Enter account customer name\n");
    scanf("%s",&act_customer_name);

    printf("Enter account number\n");
    scanf("%d",&act_number);

    if(act_customer_name !=act_number)
    {
        printf("\nAccount successfully created\n");
    }
    else{
        printf("\nCreated account not successfully created\n");
    }
    break;

    case 2:
    printf("\nEnter deposit amount:");
    scanf("%d",&deposit);
    balance+=deposit;
    {
        if(deposit>0)
        {
            printf("\nsucessfully deposit amount %d",balance);
        }
        else if(deposit==0){
     printf("invalid amount");
        } else {
            printf("amount is not deposited ");
    }
    }
    {
        if(deposit>50000)
        {
            printf("\nbank is accepeted the deposit amount");
        }
        else{
            printf("\nbank is not accepted deposit amount.please enter less than 50000 amount");
        }
    }
    break;

    case 3 :
    printf("\nEnter withdraw amount: ");
    scanf("%d", &withdraw);

    balance -= withdraw;
    {
        if(withdraw>0){
            printf("\nsuccessfully withdraw amount: ");
        }
        {
            printf("\n not successfully withdraw amount");

        }
    }
    if(withdraw>30000){
        printf("\nbank is access the withdraw amount");
    }
    break;

    case 4 :
    printf("\nyour available  balance is: %d", balance);
    break;

    case 5 :
    ci=(float)balance*4/100;
    balance+=ci;
    printf("\nInterest :%f",ci);
    printf("\n");
    break;

    case 6 :
    printf("\n $$$ STATE BANK OF INDIA CASH RECEIPT $$$\n");
    printf("\nAccount customer name: %s \n", act_customer_name);
     printf("\nAccount number: %d \n", act_number);
     printf("\nyour available balance is:%d",balance);
     printf("\nthank You !");
     break;

   case 7 : 
    return;
     
     default :
     printf("sorry Invalid choice !\n");
    }
    }
}