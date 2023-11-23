#pragma once
#include "Point2D.h"

class Point3D : public Point2D
{
public:

	// Parametric constructor to set the coordinates of a 3D point.
	explicit Point3D(float XValue, float YValue, float ZValue);

	// Default constructor: initializes 3D point at the origin.
	Point3D();

	// Getter for Z axis coordinate of the point.
	float GetZ();

	// Setter for Z axis coordinate.
	void SetZ(float fSetZValue);

	// Prints the coordinates of the 3D point.
	void Print();

	// Offsets a point on all three coordinates.
	void Offset(float fOffsetXValue, float fOffsetYValue, float fOffsetZValue);

	// Calculates the distance between this point and another 3D point.
	float Distance(Point3D AnotherPoint);

protected:
	// Z coordinate of the 3D point.
	float m_fZ;
};
