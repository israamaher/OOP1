#pragma once
#include "teacher.h"
#include "student.h"
class TAco : public teacher , student 
{
private:
	string researchSubject;
public:
	void setResearch(string r);
	string getResearch();
    using teacher::doTask;
	void doTask();
};

