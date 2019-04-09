#include "Ball.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

// Construct a default Ball object
Ball::Ball()
{
	radius = 1;
}

// Construct a Ball object with specified radius
Ball::Ball(double radius)
{
	this->radius = radius;
}

// Construct a Ball object with specified radius,
//  color and filled values
Ball::Ball(double radius, const string &color, bool filled)
{
	this->radius = radius;
	setColor(color);
	setFilled(filled);
}

// Return the radius of this Ball
double Ball::getRadius() const
{
	return radius;
}

// Set a new radius
void Ball::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

// Return the area of this Ball
double Ball::getArea() const
{
	return 4 * 3.14159 * radius * radius ;
}

// Return the perimeter of this Ball

double Ball::getVolumn() const
{
	return 4 * 3.14159 * radius * radius * radius/3;
}

// Redefine the toString function
string Ball::toString() const
{
	cout << "fill is " << isFilled();
	return "\nradius is " + to_string(getRadius()) + "\narea is " + to_string(getArea()) + "\nvolumn is " + to_string(getVolumn());
}

