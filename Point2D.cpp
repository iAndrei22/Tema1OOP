#include "Point2D.h"

Point2D::Point2D(float fXvalue, float fYvalue) {
	this->m_fX = fXvalue;
	this->m_fY = fYvalue;
}

void Point2D::SetX(float fValue) {
	this->m_fX = fValue;
}

void Point2D::SetY(float fValue) {
	this->m_fY = fValue;
}

float Point2D::GetX() {
	return this->m_fX;
}

float Point2D::GetY() {
	return this->m_fY;
}

void Point2D::Offset(float fXvalue, float fYvalue) {
	this->m_fX = this->m_fX + fXvalue;
	this->m_fY = this->m_fY + fYvalue;
}

void Point2D::Offset(Point2D c) {
	this->m_fX = this->m_fX + c.m_fX;
	this->m_fY = this->m_fY + c.m_fY;
}

void Point2D::Print() {
	cout << "X coordinate: " << this->m_fX << " Y coordinate: " << this->m_fY;
}

float Point2D::DistanceTo(Point2D a) {
	return sqrt((a.m_fX - this->m_fX) * (a.m_fX - this->m_fX) + (a.m_fY - this->m_fY) * (a.m_fY - this->m_fY));
}

Point2D Point2D::operator+(Point2D& c)
{
	Point2D res(0, 0);
	res.m_fX = this->m_fX + c.m_fX;
	res.m_fY = this->m_fY + c.m_fY;

	return res;
}