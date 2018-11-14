#include <iostream>
#include "Point.h"
#include "PointArray.h"


using namespace std;



int main() {
    Point p(1, 3);
	Point q(3, 3);
	Point r(3, 1);
	Point arr[] = {p,q,r};
	PointArray<Point> pa2(arr, 3);
	PointArray<Point> pa = pa2;
	pa.print();
	cout << endl;
	pa.push_back(r);
	pa.print();
	pa.insert(1, p);
	pa.print();
	pa.remove(0);
	pa.print();
	return 0;
}
