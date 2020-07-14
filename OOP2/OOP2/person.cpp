#include "person.h"
int person::personcount = 0;



int person::getID()
{
	return id;
}

void person::setName(string n)
{
	name = n;
}

string person::getName()
{
	return name;
}

void person::setEmail(string e)
{
	email = e;
}

string person::getEmail()
{
	return email;
}

void person::setAddress(string a)
{
	address = a;
}

string person::getAddress()
{
	return address`;
}

void person::setMobile(string m)
{
	mobile = m;
}

string person::getMobile()
{
	return mobile;
}

person::person()
{
	personcount++;
	id = personcount;
}
