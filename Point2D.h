#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Point2D
{
public:

	// Default constructor: initializes point at the origin.
	Point2D() {
		this->m_fX = 0;
		this->m_fY = 0;
	}

	// Parametric constructor: sets the coordinates of a point.
	Point2D(float fXvalue, float fYvalue);

	// Sets the X coordinate of the point.
	void SetX(float fValue);

	// Sets the Y coordinate of the point.
	void SetY(float fValue);

	// Gets the X coordinate of the point.
	float GetX();

	// Gets the Y coordinate of the point.
	float GetY();

	// Prints the coordinates of the point.
	void Print();

	// Offsets the coordinates of the point by given values.
	void Offset(float fXvalue, float fYvalue);

	// Offsets the coordinates of the point by the coordinates of another point object.
	void Offset(Point2D c);

	// Calculates the distance between two points.
	float DistanceTo(Point2D a);

	// Overloads the plus operator to offset coordinates with another point's coordinates.
	Point2D operator+(Point2D& c);

protected:

	// X coordinate of the point.
	float m_fX;

	// Y coordinate of the point.
	float m_fY;
};
