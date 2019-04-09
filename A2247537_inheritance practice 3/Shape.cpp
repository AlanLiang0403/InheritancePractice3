#include "Shape.h"

Shape::Shape()
{
	color = "white";
	filled = false;
}


string Shape::toString() const
{
	return "Shape";
}
