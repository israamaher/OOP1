#pragma once
#include <string>
using namespace std;
class Employee
{
private:
	string name;
	float salary;
	int departmentId, age;
public:
	void setName(string n);
	string getName();

	void setSalary(float s);
	float getSalary();

	void setDepartmentId(int id);
	int getDepartmentId();

	void setAge(int a);
	int getAge();


};

