#include "Shape3D.h"
#include "Ball.h"
#include "Cuboid.h"
#include "Shape2D.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"
#include <iostream>
using namespace std;

// A function for comparing the areas of two geometric objects
bool equalArea(Shape &object1, Shape &object2)
{
	return object1.getArea() == object2.getArea();
}

// A function for displaying a geometric object
void display(Shape &object)
{
	cout << object.toString()<< endl;
	
}

int main()
{
	Ball ball(5, "red", 1);
	Cuboid cuboid(5, 3, 2, "black", 0);
	Rectangle rectangle(5, 4, "blue", 1);
	Circle circle(5, "green", 0);


	cout << "Ball info: " << endl;
	display(ball);

	cout << "\nCuboid info: " << endl;
	display(cuboid);

	cout << "\nThe two objects have the same area? " <<
		(equalArea(ball, cuboid) ? "Yes" : "No") << endl;

	cout << "\nRectangle info: " << endl;
	display(rectangle);

	cout << "\nCircle info: " << endl;
	display(circle);

	cout << "\nThe two objects have the same area? " <<
		(equalArea(rectangle, circle) ? "Yes" : "No") << endl;
	
	system("pause");
	return 0;
}

