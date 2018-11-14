#include "Point.h"
#include <iostream>

Point::Point(int xh, int yh) {
	x = xh;
	y = yh;
}

Point::Point(Point &o) {
	x = o.x;
	y = o.y;
}

Point::Point()
{
	x = 0;
	y = 0;
}

void Point::offset(double nx, double ny) {
	x += nx;
	y += ny;
}

void Point::print() {
	std::cout << "(" << x << "," << y << ")";
}

double Point::getx() {
	return x;
}

double Point::gety() {
	return y;
}

void Point::setx(double newx) {
	x = newx;
}

void Point::sety(double newy) {
	y = newy;
}
