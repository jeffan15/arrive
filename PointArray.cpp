#include "PointArray.h"
#include <iostream>

using namespace std;

template <typename T>
PointArray<T>::PointArray()
{
	this->size = 0;
	this->points = new T[size];
}

template <typename T>
PointArray<T>::PointArray( T pts[], int size)
{
	this->size = size;
	this->points = new T[size];
	for (int i = 0; i < size; i++) {
		points[i] = pts[i];
	}
}

template <typename T>
PointArray<T>::PointArray(PointArray &o)
{
	this->size = o.size;
	this->points = new T[size];
	for (int i = 0; i < size; i++) {
		points[i] = o.points[i];
	}
}

template <typename T>
void PointArray<T>::resize(int newSize)
{
	T *pts = new T[newSize];
	int minsize = (newSize > size) ? size : newSize;
	for (int i = 0; i < minsize; i++) {
		pts[i] = points[i];
	}
	T *sss = points;
	points = pts;
	delete[] sss;
	size = newSize;
}

template <typename T>
int PointArray<T>::getSize()
{
	return size;
}

template <typename U>
void PointArray<U>::clear()
{
	resize(0);
}

template <typename T>
void PointArray<T>::print()
{
	for (int i = 0; i < size; i++) {
		points[i].print();
	}
}

template <typename T>
void PointArray<T>::push_back(const T &p)
{
	resize(size + 1);
	points[size - 1] = p;
}

template <typename T>
void PointArray<T>::insert(const int pos, const T & p)
{
	resize(size + 1);
	T *pts = new T[size];
	int w = 0;
	for (int i = 0; i < size; i++) {
		if (i == pos) {
			pts[i] = p;
			continue;
		}
		pts[i] = points[w];
		w++;
	}

	T *sss = points;
	points = pts;
	delete[] sss;
}

template <typename T>
void PointArray<T>::remove(const int pos)
{
	T *pts = new T[size-1];
	int w = 0;
	for (int i = 0; i < size; i++) {
		if (i == pos) continue;
		pts[w] = points[i];
		w++;
	}

	T *sss = points;
	points = pts;
	delete[] sss;
	size--;
}

template <typename T>
PointArray<T>::~PointArray()
{
	delete[] points;
}

template class PointArray<double>;
template class PointArray<int>;
template class PointArray<Point>;
