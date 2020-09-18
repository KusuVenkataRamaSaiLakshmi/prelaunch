#ifndef __HEADERS_H__
#define __HEADERS_H__

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void display();

int Create_new_account();
void Get_Account_Info();
void Deposit_Cash();
void Withdraw_Cash();
void logout();


struct bank_account
{
	char customer_name[30];
   char PAN_number[10];
   int acc_number;
   char customer_address[100];
   float available_balance;    
};
struct bank_account account;



#endif

