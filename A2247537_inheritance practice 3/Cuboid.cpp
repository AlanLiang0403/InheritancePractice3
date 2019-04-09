#include "Cuboid.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

// Construct a default Cuboid object
Cuboid::Cuboid()
{
	width = 1;
	height = 1;
	length = 1;
}

// Construct a Cuboid object with specified width and height
Cuboid::Cuboid(double width, double height, double length)
{
	this->width = width;
	this->height = height;
	this->length= length;
}

Cuboid::Cuboid(double width, double height, double length, const string &color, bool filled)
{
	this->width = width;
	this->height = height;
	this->length = length;
	setColor(color);
	setFilled(filled);
}

// Return the width of this Cuboid
double Cuboid::getWidth() const
{
	return width;
}

// Set a new radius
void Cuboid::setWidth(double width)
{
	this->width = (width >= 0) ? width : 0;
}

// Return the height of this Cuboid
double Cuboid::getHeight() const
{
	return height;
}

// Set a new height
void Cuboid::setHeight(double height)
{
	this->height = (height >= 0) ? height : 0;
}

// Return the area of this Cuboid

double Cuboid::getLength() const
{
	return length;
}

// Set a new height
void Cuboid::setLength(double length)
{
	this->length = (length >= 0) ? length : 0;
}

// Return the area of this Cuboid
double Cuboid::getArea() const
{
	return (width* height + width* length + height* length) * 2;
}

// Return the perimeter of this Cuboid
double Cuboid::getVolumn() const
{
	return width* height* length;
}

// Redefine the toString function, to be covered in Section 15.5
string Cuboid::toString() const
{
	cout << "fill is " << isFilled();
	return "\nwidth is " + to_string(getWidth()) +
		"\nheight is " + to_string(getHeight()) +
		"\nlength is " + to_string(getLength()) +
		"\narea is " + to_string(getArea()) +
		"\nvolumn is " + to_string(getVolumn());
}

