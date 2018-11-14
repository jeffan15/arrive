#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"

template <typename T>
class PointArray {
public:
	PointArray();
	PointArray(const T pts[], const int size);
	PointArray(PointArray &o);
	~PointArray();
	int getSize();
	void clear();
	void print();
	void push_back(const T &p);
	void insert(const int, const T &p);
	void remove(const int);
private:
	int size;
	T *points;
	void resize(int);

};

#endif // POINTARRAY_H
