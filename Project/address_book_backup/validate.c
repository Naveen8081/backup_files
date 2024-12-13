#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"contact.h"

extern int countnmsrch;

int is_validname(char* name)
{
	int i=0;
	while(name[i])
	{
		if(!( (isalpha((unsigned char)name[i])) || (name[i]==' ') ))
		{
			printf("Invalid Name!\n");
			return 0;
		}
		i++;
	}
	return 1;
}

int is_validphone(char* phone)
{
	int i=0;
	if(strlen(phone)!=10)
	{
		printf("Invalid Phone!\n");
		return 0;
	}

	while(phone[i])
	{
		if( !isdigit(phone[i]) )
		{
			printf("Invalid Phone!\n");
			return 0;
		}
		i++;
	}
	return 1;
}

int is_validemail(char* email)
{
	char* ind;
	ind=strchr(email,'@');
	if(ind)
	{
		if(isalnum(*(--ind)))
		{
			ind=strstr(email,".com");
			if(ind)
			{     
				if(isalpha(*(--ind)))
					return 1;
			}
		}
	}
	printf("Invalid eMail!\n");
	return 0;
}

int is_nameexist(char* name,AddressBook *addressBook)
{	
	int index;	
	int count=0;
	for(int i=0; i<addressBook->contactCount; i++)
	{
		if(!strcmp(addressBook->contacts[i].name,name))
		{
			if(count==0)
			{
				titleprompt();			
			}
		count++;
		printf("%20s %20s %20s\n",addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
		index=i+1;
		}
	}

	countnmsrch=count;	

	if(!count)
	{
		printf("Contact with entered name not found!\n");
		return 0;
	}
	else
		return index+1;

}

int is_phexist(char* str,AddressBook *addressBook)
{
	int i;
	for(i=0;i<addressBook->contactCount;i++)
	{
		if(!strcmp(addressBook->contacts[i].phone,str))
			return i+1;
	}
	return 0;	
}

int is_mailexist(char* str,AddressBook *addressBook)
{
	int i;
	for(i=0;i<addressBook->contactCount;i++)
	{
		if(!strcmp(addressBook->contacts[i].email,str))
			return i+1;
	}
	return 0;    
}

