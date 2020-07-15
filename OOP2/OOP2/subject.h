#pragma once
#include <string>
using namespace std;
class subject
{
private:
	string name;
	int fullMark, studentMarks;
	
public:
	void setName(string n);
	string getName();

	void setFullMark(int fm);
	int getFullMark();

	void setStudentMarks(int sm);
	int getStudentMarks();
	
	subject operator +(subject s2);
	subject();
	subject(string n, int fm, int sm);
};

