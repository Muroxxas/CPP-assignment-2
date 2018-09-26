#include "stdafx.h"
#include "Contact.h"

//default constructor
Contact::Contact()
{
	setName("");
	setPhone("");
	setEmail("");
	setAddress("");
}
//custom constructor
Contact::Contact(string Name, string Email, string Phone, string Address) {
	setName(Name);
	setEmail(Email);
	setPhone(Phone);
	setAddress(Address);
}

Contact::~Contact()
{
}



//Setters
void Contact::setName(string Name) {
	//verification to see if Name is shorter than 20 characters.
	if (Name.length() <= 20) {
		this->name = Name;
	}
	else {
		this->name = Name;
	}
}
void Contact::setEmail(string Email) {
	this->email = Email;
}
void Contact::setPhone(string Phone) {
	
	this->phone = Phone;
}
void Contact::setAddress(string Address) {
	this->address = Address;
}

//Getters
string Contact::getName() {
	return this->name;
}
string Contact::getEmail() {
	return this->email;
}
string Contact::getPhone() {
	return this->phone;
}
string Contact::getAddress() {
	return this->address;
}
