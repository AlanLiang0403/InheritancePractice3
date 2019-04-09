#ifndef SHAPE3D_H
#define SHAPE3D_H
#include <string>
#include "Shape.h"
using namespace std;

class Shape3D : public Shape
{
public:
	Shape3D();
	Shape3D(string color, bool filled);
	string getColor();
	void setColor(string color);
	bool isFilled() const;
	void setFilled(bool filled);
	virtual double getArea() const=0;
	virtual double getVolumn() const = 0;
	string toString() const;

private:
	string color;
	bool filled;
}; // Must place semicolon here

#endif