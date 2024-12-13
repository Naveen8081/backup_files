#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include "contact.h"
#include "file.h"
#include "validate.h"

int countnmsrch;

void titleprompt()
{
	printf("----------------------------------------------------------------------");
	printf("\n%-20s %-20s %-20s\n","NAME", "PHONE", "eMAIL");
	printf("----------------------------------------------------------------------\n");
}

//void(int index,AddressBook)
//{
//	
//}


void listContacts(AddressBook *addressBook) 
{
	titleprompt();
	for(int i=0;i<addressBook->contactCount;i++)
	{
		printf("%20s %20s %20s\n",addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
	}    
}

void initialize(AddressBook *addressBook) {
	addressBook->contactCount = 0;

	// Load contacts from file during initialization (After files)
	loadContactsFromFile(addressBook);
}

void saveAndExit(AddressBook *addressBook) {
	saveContactsToFile(addressBook); // Save contacts to file
	exit(EXIT_SUCCESS); // Exit the program
}


void createContact(AddressBook *addressBook)
{
	do
	{
		printf("Enter Name:\n");
		scanf("%[^\n]",addressBook->contacts[addressBook->contactCount].name);
		getchar();
	}while(!is_validname(addressBook->contacts[addressBook->contactCount].name));

	do
	{
		printf("Enter Number:\n");
		scanf("%s",addressBook->contacts[addressBook->contactCount].phone);
	}while(!is_validphone(addressBook->contacts[addressBook->contactCount].phone) ||(is_phexist(addressBook->contacts[addressBook->contactCount].phone,addressBook)&& printf("Phone Number Exist!\n")));

	do
	{
		printf("Enter Email:\n");
		scanf("%s",addressBook->contacts[addressBook->contactCount].email);
	}while(!is_validemail(addressBook->contacts[addressBook->contactCount].email) ||(is_mailexist(addressBook->contacts[addressBook->contactCount].email,addressBook)&& printf("Email Exist!\n")) );

	addressBook->contactCount++;
}

int searchContact(AddressBook *addressBook) 
{
	int index;
	char entity[20];
	int entity_choice;
	do
	{
		printf("Enter Entity to search:\n1.Name\n2.Phone\n3.Email\n");
		scanf("%d",&entity_choice);
		__fpurge(stdin);
	}while((!entity_choice>=1 && entity_choice<=3) && printf("Invalid choice"));	

	if(entity_choice==1)
	{
		countnmsrch=0;
                do
                {
                        printf("Enter Name:\n");
                        scanf("%[^\n]",entity);
                        getchar();
                }while(!is_validname(entity));

		index=is_nameexist(entity,addressBook);

		return index;
	}

	if(entity_choice==2)
	{
		printf("Enter Phone:\n");
		scanf("%s",entity);

		int index=is_phexist(entity,addressBook);
		if(index)
		{	
			titleprompt();
			printf("%20s %20s %20s\n", addressBook->contacts[index-1].name, addressBook->contacts[index-1].phone, addressBook->contacts[index-1].email);
		}
		else
			printf("Contact matching this phone not found!\n");			

		return index;
	}

	if(entity_choice==3)
	{
		printf("Enter Email:\n");
		scanf("%s",entity);

		int index=is_mailexist(entity,addressBook);
		if(index)
		{
			titleprompt();
			printf("%20s %20s %20s\n",addressBook->contacts[index-1].name, addressBook->contacts[index-1].phone, addressBook->contacts[index-1].email);	
		}
		else
			printf("Contact matching this email not found!\n");   

		return index;
	}
}

void editContact(AddressBook *addressBook)
{
	int index=searchContact(addressBook);
	if(!index)
		return;
	if(countnmsrch >1)
	{
		index=research(addressBook);
	}

	char entity[20];
	int choice;
	do
	{
		printf("Enter Entity to Edit:\n1.Name\n2.Phone\n3.Email\n");
		scanf("%d",&choice);
		__fpurge(stdin);
	}while((!choice>=1 && choice<=3) && printf("Invalid choice"));

	if(choice==1)
	{
		do
		{
			printf("Enter Name:\n");
			scanf("%[^\n]",entity);
			getchar();
		}while(!is_validname(entity));
		strcpy(addressBook->contacts[index-1].name,entity);
	}

	if(choice==2)
	{
		do
		{
			printf("Enter Phone:\n");
			scanf("%s",entity);
		}while(!is_validphone(entity) ||(is_phexist(entity,addressBook)&& printf("Phone Number Exist!\n")));
		strcpy(addressBook->contacts[index-1].phone,entity);
	}

	if(choice==3)
	{
		do
		{
			printf("Enter Email:\n");
			scanf("%s",entity);
		}while(!is_validemail(entity) ||(is_mailexist(entity,addressBook)&& printf("Phone Number Exist!\n")));
		strcpy(addressBook->contacts[index-1].email,entity);
	}
	printf("Contact Updated Successfully!\n");
}


void deleteContact(AddressBook *addressBook)
{
	int index=searchContact(addressBook);
	if(!index)
		return;

	if(countnmsrch >1)
	{
		index=research(addressBook);
	}

	for(int i=index; i< (addressBook->contactCount-1); i++)	
	{
		strcpy(addressBook->contacts[i].name, addressBook->contacts[i+1].name);
		strcpy(addressBook->contacts[i].phone, addressBook->contacts[i+1].phone);
		strcpy(addressBook->contacts[i].email, addressBook->contacts[i+1].email);
	}
}


int research(AddressBook *addressBook)
{
	int researchindex;
	char entity[20];
	int choice;
	do
	{
		printf("Enter entity to select from contacts\n");
		printf("1.Phone\n2.Email\n");
		scanf("%d",&choice);
		__fpurge(stdin);
	}while((!(choice==1 || choice==2)) && printf("Invalid choice\n"));

	int temp=0;
	if(choice==1)
	{
		do
		{
			printf("Enter phone:\n");
			scanf("%s",entity);
		}while(! ((( temp=is_validphone(entity) && (researchindex=is_phexist(entity,addressBook)) )) || (!temp || printf("Invalid Entry!\n"))) );

		printf("Contact selected to edit:\n");
		titleprompt();
		printf("%20s %20s %10s\n",addressBook->contacts[researchindex-1].name, addressBook->contacts[researchindex-1].phone, addressBook->contacts[researchindex-1].email);
	}

	if(choice==2)
	{
		do
		{
			printf("Enter email:\n");
			scanf("%s",entity);
		}while(! ((( temp=is_validemail(entity) && (researchindex=is_mailexist(entity,addressBook)) )) || (temp ||  printf("Invalid Entry!\n"))) );

		printf("Contact selected to edit:\n");
		titleprompt();
		printf("%20s %20s %10s\n",addressBook->contacts[researchindex-1].name, addressBook->contacts[researchindex-1].phone, addressBook->contacts[researchindex-1].email);
	}
	return researchindex;
}
