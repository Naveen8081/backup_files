#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTACTS 100



typedef struct {
    char name[50];
    char phone[20];
    char email[50];
} Contact;

typedef struct {
    Contact contacts[MAX_CONTACTS];
    int contactCount;
} AddressBook;

void createContact(AddressBook *);
int searchContact(AddressBook *);
void editContact(AddressBook *);
void deleteContact(AddressBook *);
void listContacts(AddressBook *);
void initialize(AddressBook *);
void saveContactsToFile(AddressBook *);

void titleprompt();
void updatebyindex(AddressBook *, int);
int research(AddressBook *);
#endif
