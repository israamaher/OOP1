#pragma once
#include <string>
using namespace std;
class person
{
private:
	int id;
	static int personcount;
	string name, email, address, mobile;
public:

	int getID();

	void setName(string n);
	string getName();

	void setEmail(string e);
	string getEmail();

	void setAddress(string a);
	string getAddress();

	void setMobile(string m);
	string getMobile();


	person();
};

