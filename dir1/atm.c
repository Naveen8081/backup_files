#include<stdio.h>
int main()
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int dep=5000;
	int pin=1234;
	int inpin;
	int limit=1;
	int bal=5000;
	int withdrawl;
	/////////////////////// WELCOME WINDOW  ///////////////////////////

	printf("------WELCOME TO SBI------\n\n(1)Insert Card\n(2)Cardless Deposit\n\n\nENTER OPTION:\n");
	scanf("%d",&i);
	if(i=1)		//enter input section if the card option is selected
	{
		/////////////////////// PIN INPUT SECTION  /////////////////////// 
		do
		{	if(limit==5)
			{	printf("TOO MANY ATTEMPTS!!!");
				return 0;	// exit main if pin entered was wrong five times
			}
			printf("\n\n------ENTER PIN:------\n");
			scanf("%d",&inpin);
			if(pin!=inpin)
			{	printf("YOU ENTERED WRONG PIN!\nre-enter your PIN correctly.\n\n");
				limit++;
			}
		}while(inpin!=pin);
		////////////////////// CARD OPTIONS ////////////////////////
		printf("\n\n------Enter your choice:-------\n\n(1)Balance Enquiry\n(2)Cash Deposit\n(3)Cash Withdrawl\n");
		scanf("%d",&k);
		if(k==1)	//Balance
		{
			printf("\n\n------Your Balance:------\n\nLedger Balance: Rs.%d \nAvailable Balance: Rs.%d\n",bal,bal-500);
		}
		if(k==2)	//Deposit
		{
			printf("\n\n------INSTRUCTIONS------\n\nPlease Place only following denominations:100, 200, 500. \nWarning:Please don't put any coins inside!\n\nPress 1 after placing your money to start validation.\n");
			scanf("%d",&l);
			if(l==1)
			{
				printf("\n\nYour placed amount is:%d\n\nPress 1 to proceed deposit\n",dep);
				scanf("%d",&m);
				if(m==1)
				{
					printf("\n\n\n------YOUR MONEY IS DEPOSITED-------\nTHANK YOU!\nVISIT AGAIN\n\n");
					bal=bal+dep;
					printf("Your Balance:%d\n",bal);
				}
			}
		}
		if(k==3)	//Withdrawl
		{
			printf("\n\n\n------Enter withdrawl amount in INR:-------\n");
			scanf("%d",&withdrawl);
			if(withdrawl<=bal-500)
			{
				printf("Please collect your cash!\nVisit again\n------THANK YOU!------\n");
				bal=bal-withdrawl;
			}
			else
			{
				printf("Insufficient Balance!\n\n");
			}	

		}
	}
	else
	{
	printf("\n\n------Enter Bank Details------\nEnter account number:\n");
	scanf("")
	printf("\nEnter account holder name:\n")
	}
}
