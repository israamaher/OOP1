#pragma once
#include "student.h"
#include"subject.h"
#include"teacher.h"
#include"TAco.h"
class school
{
private:
	subject Subject[100];
	int cont,total;
public:
	void Addsubject();
	void change();
	void print();
	school();
};

