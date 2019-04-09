#include "Shape3D.h"

Shape3D::Shape3D()
{
	color = "white";
	filled = false;
}

Shape3D::Shape3D(string color, bool filled)
{
	this->color = color;
	this->filled = filled;
}

string Shape3D::getColor()
{
	return color;
}

void Shape3D::setColor(string color)
{
	this->color = color;
}

bool Shape3D::isFilled() const
{
	return filled;
}

void Shape3D::setFilled(bool filled)
{
	this->filled = filled;
}

string Shape3D::toString()const
{
	return "Shape3D";
}