#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class Shape
{
public:
	Shape();
	virtual string toString() const;
	virtual double getArea() const = 0;

private:
	string color;
	bool filled;
}; // Must place semicolon here

#endif