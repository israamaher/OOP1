#pragma once
#include <string>
using namespace std;
class Department
{
private:
	string name , managerName;
	int departmentId;
public:
	void setName(string n);
	string getName();

	void setManagerName(string mn);
	string getManagerName();

	void setDepartmentId(int id);
	int getDepartmentId();

};

