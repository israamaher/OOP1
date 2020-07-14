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

void subject::Addsubject()
{

	cout << "plaese enter name" << endl;
	cin >> name;
	cout << "plaese enter fullmark" << endl;
	cin >> fullMark;
	cout << "plaese enter studentmarks" << endl;
	cin >> studentMarks;

	subject sub;
	





}
