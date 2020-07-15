#pragma once
#include "person.h"
class teacher :public person
{
private:
	double salary;
	int workingHoures;
public:
	void setSalary(double s);
	double getSalary();
	void setWorkingHours(int w);
	int getWorkingHours();
	void doTask();
};

