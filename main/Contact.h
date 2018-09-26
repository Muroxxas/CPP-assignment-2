#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using std::string;


class Contact
{
public:
	Contact();
	Contact(string Name, string Email, string Phone, string Address);
	~Contact();
	string getName();
	void setName(string Name);
	string getEmail();
	void setEmail(string Email);
	string getPhone();
	void setPhone(string Phone);
	string getAddress();
	void setAddress(string Address);

private :
	string name;
	string email;
	string phone;
	string address;
};

#endif