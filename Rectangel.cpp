#include "Rectangel.h"

void Rectangel::setlength(float l)
{
	length = l;
}

float Rectangel::getlength()
{
	return length;
}

void Rectangel::setwidth(float w)
{
	width = w;
}

float Rectangel::getwidth()
{
	return width;
}

float Rectangel::calculat_arae(float l, float w)
{
	return (l*w)*2;
}
