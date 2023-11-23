#include "Point3D.h"

Point3D::Point3D(float fXValue, float fYValue, float fZValue) : Point2D(fXValue, fYValue), m_fZ(fZValue)
{
	this->m_fZ = fZValue;
}

Point3D::Point3D()
{
	this->m_fZ = 0;
}

float Point3D::GetZ()
{
	return this->m_fZ;
}

void Point3D::SetZ(float fSetZValue)
{
	this->m_fZ = fSetZValue;
}

void Point3D::Offset(float fOffsetXValue, float fOffsetYValue, float fOffsetZValue)
{
	Point2D::Offset(fOffsetXValue, fOffsetYValue);
	this->m_fZ = this->m_fZ + fOffsetZValue;
}

float Point3D::Distance(Point3D AnotherPoint)
{
	return sqrt(pow(AnotherPoint.m_fX - this->m_fX, 2) + pow(AnotherPoint.m_fY - this->m_fY, 2) + pow(AnotherPoint.m_fZ - this->m_fZ, 2));
}

void Point3D::Print()
{
	Point2D::Print();
	std::cout << "Z coordinate = " << this->m_fZ << ";" << std::endl;
}