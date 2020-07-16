#include "school.h"
#include <iostream>
#include <string>
using namespace std;
void school::Addsubject()
{
	string name;
	int fullMark, studentMarks;
	cout << "plaese enter name" << endl;
	cin >> name;
	cout << "plaese enter fullmark" << endl;
	cin >> fullMark;
	cout << "plaese enter studentmarks" << endl;
	cin >> studentMarks;

	subject sub;
	sub.setName(name);
	sub.setFullMark(fullMark);
	sub.setStudentMarks(studentMarks);

	Subject[cont] = sub;
	cont++;
}

void school::change()
{
	string name;
	int full, stmark;
	cout << "please Eneter name";
	cin >> name;
	cout << "please Eneter full Mark";
	cin >> full;
	cout << "please Eneter student Markes";
	cin >> stmark;
	for (int i = 0; i <= cont; i++)
	{
		
		if (Subject[i].getName() == name)
		{
			Subject[i].setFullMark(full);
			Subject[i].setStudentMarks(stmark);
			break;
		}

	}

}

void school::print()
{
	int total = 0;

	for (int i = 0; i <= cont; i++)
	{
		total +=Subject[i].getStudentMarks();
	}

	cout << total << endl;
}

school::school(): cont(0)
{
	
}
