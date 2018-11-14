#ifndef POINT_H
#define POINT_H


class Point
{
public:
	Point();
	Point(Point &o);
	Point(int, int);

	void offset(double, double);
	void print();
	double getx();
	double gety();
	void setx(double newx);
	void sety(double newy);
private:
	double x, y;
};

#endif // POINT_H
