#ifndef CUBOID_H
#define CUBOID_H
#include "Shape3D.h"

class Cuboid : public Shape3D
{
public:
	Cuboid();
	Cuboid(double width, double height, double length);
	Cuboid(double width, double height, double length, const string &color, bool filled);
	double getWidth() const;
	void setWidth(double);
	double getHeight() const;
	void setHeight(double);
	double getLength() const;
	void setLength(double);
	double getArea() const;
	double getVolumn() const;
	string toString() const;

private:
	double width;
	double height;
	double length;
};  // Must place semicolon here

#endif
