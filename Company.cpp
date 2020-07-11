#include "Company.h"
#include <iostream>
using namespace std;
void Company::addDepartment()
{
	
	int departmentID;
	string name, manageName;

	cout << "please Enter Department Name";
	cin >> name;

	cout << "please Enter Department ID";
	cin >> departmentID;
	cout << "please Enter Department ManagerName";
	cin >> manageName;

	Department depart;
	depart.setName(name);
	depart.setManagerName(manageName);
	depart.setDepartmentId(departmentID);

	department[numberOfDepartment] = depart;
	numberOfDepartment++;


}

void Company::addEmpployee()
{
	string name;
	int age, departmentID;
	float salary;

	cout << "please Enter Employee name";
	cin >> name;
	cout << "please Enter Employee age";
	cin >> age;
	cout << "please Enter Employee salary";
	cin >> salary;
	cout << "please Enter departmentID";
	cin >> departmentID;


	Employee e;
	e.setName(name);
	e.setAge(age);
	e.setDepartmentId(departmentID);
	e.setSalary(salary);


	employee[numberOfEmployee] = e;
	numberOfEmployee++;

}

void Company::change()
{
	string name;
	int departmentID;
	
	   cout << " please Enter Employee name";
		cin >> name;
		cout << " please Enter departmentID";
		cin >> departmentID;


		for (int i = 0; i <= numberOfEmployee; i++)
		{
			if (employee[i].getName() == name)
			{
				employee[i].setDepartmentId(departmentID);
				break;
			}
		}
}

void Company::print()
{
	for (int i = 0; i <= numberOfDepartment; i++)
	{
		int number = 0;
		for (int j = 0; j <= numberOfEmployee; j++)
		{
			if (employee[j].getDepartmentId() == department[i].getDepartmentId())
			{
				number++;
			}	
		}

		cout << department[i].getName() << "  has" << number << "employee"<<endl;

	}

	
}



Company::Company():numberOfDepartment(0),numberOfEmployee(0)
{
}
