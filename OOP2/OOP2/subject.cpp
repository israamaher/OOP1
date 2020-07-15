#include "subject.h"
#include <iostream>
using namespace std;
void subject::setName(string n)
{
	name = n;
}

string subject::getName()
{
	return name;
}

void subject::setFullMark(int fm)
{
	fullMark = fm;
}

int subject::getFullMark()
{
	return fullMark;
}

void subject::setStudentMarks(int sm)
{
	studentMarks = sm;
}

int subject::getStudentMarks()
{
	return studentMarks;
}

subject subject::operator+(subject s2)
{
	
	subject rusult;
	rusult.name = name+s2.getName();
	rusult.fullMark = fullMark+s2.getFullMark();
	rusult.studentMarks = studentMarks+s2.getStudentMarks();

	return rusult;
}

subject::subject()
{
}

subject::subject(string n, int fm, int sm)
{
	name = n;
	fullMark = fm;
	studentMarks = sm;
}





