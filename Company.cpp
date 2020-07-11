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

Company::Company():numberOfDepartment(0),numberOfEmployee(0)
{
}
