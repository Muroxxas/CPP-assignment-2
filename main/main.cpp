// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include "Contact.h"
#include <iostream>
using std::cout;


int main()
{
	Contact contact1;
	Contact contact2("Bill", "bob@bobhole.com", "897y9y85vy8958y7", "1835 73rd Ave NE, Medina, Washington, USA");
	Contact contact3("A Vuvuzella", "BWWWWWWWWWWWWWM@LOUDNOISES.COM", "41280085", "42 Wallaby Road, Sydney");

	std::vector<Contact> contacts;
	contacts.push_back(contact1);
	contacts.push_back(contact2);
	contacts.push_back(contact3);

	for (int i = 0; i < contacts.size(); i++) {
		cout << "Name: "<< contacts[i].getName()<<"\n";
		cout << "Email: " << contacts[i].getEmail() << "\n";
		cout << "Phone: " << contacts[i].getPhone() << "\n";
		cout << "Address: " << contacts[i].getAddress() << "\n" << "\n";
	}
	Contact contactStore = contacts[0];
	Contact *contactPtr = &contacts[1];
	Contact &contactRef = contacts[2];

	contactStore.setName("AYY LMAO");
	contactPtr->setAddress("Nowheresville, Everywherecounty");
	contactRef.setEmail("Retardedhorse@weirdearlyyoutubevids.com");
	
	for (int i = 0; i < contacts.size(); i++) {
		cout << "Name: " << contacts[i].getName() << "\n";
		cout << "Email: " << contacts[i].getEmail() << "\n";
		cout << "Phone: " << contacts[i].getPhone() << "\n";
		cout << "Address: " << contacts[i].getAddress() << "\n" << "\n";
	}
	// Only the contents of the last two objects update. As for why,
	//Is it because the update line is affecting the address of the item and not it's contents?
	//TEST COMMENT HELP ME
}

