#pragma once
#include "Department.h"
#include"Employee.h"
class Company
{
private:
	Employee employee[100];
	Department department[100];
	int numberOfEmployee, numberOfDepartment;
public:

	void addDepartment();
	void addEmpployee();
	void change();
	void print();

	Company();
};

