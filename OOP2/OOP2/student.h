#pragma once
#include "person.h"
class student : public virtual person
{
private:
	int grade;
	double GPA;
public:
	void setGrade(int g);
	int getGrade();

	void setGPA(double gp);
	double getGPA();

	void doTask();
};

