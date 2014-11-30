#include "Vector2.h"


Vector2::Vector2()
{
}

Vector2::Vector2(int x,int y)
{
	X = x;
	Y = y;
}

Vector2::Vector2(Vector2* vector)
{
	X = vector->X;
	Y = vector->Y;
}


Vector2::~Vector2()
{
}
