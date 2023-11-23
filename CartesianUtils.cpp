#include "CartesianUtils.h"

float CartesianUtils::Distance(Point2D pFirstPoint, Point2D pSecondPoint) {
	return sqrt(pow(pFirstPoint.GetX() - pSecondPoint.GetX(), 2) + pow(pFirstPoint.GetY() - pSecondPoint.GetY(), 2));
}

float CartesianUtils::Distance(Point3D pFirstPoint, Point3D pSecondPoint) {
	return sqrt(pow(pFirstPoint.GetX() - pSecondPoint.GetX(), 2) + pow(pFirstPoint.GetY() - pSecondPoint.GetY(), 2) + pow(pFirstPoint.GetZ() - pSecondPoint.GetZ(), 2));
}

Point2D CartesianUtils::Offset(Point2D pPoint, float fTranslationOnX, float fTranslationOnY) {
	Point2D result;
	result.SetX(pPoint.GetX() + fTranslationOnX);
	result.SetY(pPoint.GetY() + fTranslationOnY);

	return result;
}

Point3D CartesianUtils::Offset(Point3D pPoint, float fTranslationOnX, float fTranslationOnY, float fTranslationOnZ) {
	Point3D result;
	result.SetX(pPoint.GetX() + fTranslationOnX);
	result.SetY(pPoint.GetY() + fTranslationOnY);
	result.SetZ(pPoint.GetZ() + fTranslationOnZ);

	return result;
}

Point2D CartesianUtils::Rotate(Point2D pInitialPoint, float fRotationAngle) {
	Point2D result;
	float RotationMatrix[2][2];
	float CoordinatesMatrix[2][1];

	RotationMatrix[0][0] = cos(fRotationAngle);
	RotationMatrix[0][1] = -sin(fRotationAngle);
	RotationMatrix[1][0] = sin(fRotationAngle);
	RotationMatrix[1][1] = cos(fRotationAngle);

	CoordinatesMatrix[0][0] = pInitialPoint.GetX();
	CoordinatesMatrix[1][0] = pInitialPoint.GetY();

	CoordinatesMatrix[0][0] = RotationMatrix[0][0] * CoordinatesMatrix[0][0] + RotationMatrix[0][1] * CoordinatesMatrix[1][0];
	CoordinatesMatrix[1][0] = RotationMatrix[1][0] * pInitialPoint.GetX() + RotationMatrix[1][1] * CoordinatesMatrix[1][0];

	result.SetX(CoordinatesMatrix[0][0]);
	result.SetY(CoordinatesMatrix[1][0]);

	return result;
}

Point2D CartesianUtils::Rotate(Point2D pInitialPoint, float fRotationAngle, Direction direction) //dc aici nu trebuie scope si jos da?
{
	Point2D result;
	fRotationAngle = fRotationAngle * static_cast<int>(direction);
	result.SetX(cos(fRotationAngle) * pInitialPoint.GetX() + (-sin(fRotationAngle)) * pInitialPoint.GetY());
	result.SetY(sin(fRotationAngle) * pInitialPoint.GetX() + cos(fRotationAngle) * pInitialPoint.GetY());

	return result;
}

Point2D CartesianUtils::RotateAroundPoint(Point2D pInitialPoint, Point2D pCenterPoint, float fRotationAngle)
{
	Point2D result;

	// Translate the initial point so that the center point is the origin
	float translatedX = pInitialPoint.GetX() - pCenterPoint.GetX();
	float translatedY = pInitialPoint.GetY() - pCenterPoint.GetY();

	// Apply the rotation to the translated point
	result.SetX(cos(fRotationAngle) * translatedX + (-sin(fRotationAngle)) * translatedY);
	result.SetY(sin(fRotationAngle) * translatedX + cos(fRotationAngle) * translatedY);

	// Translate the rotated point back to its original position
	result.SetX(result.GetX() + pCenterPoint.GetX());
	result.SetY(result.GetY() + pCenterPoint.GetY());

	return result;
}

Point2D CartesianUtils::RotateAroundPoint(Point2D pInitialPoint, Point2D pCenterPoint, float fRotationAngle, Direction direction)
{
	Point2D result;
	fRotationAngle *= static_cast<int>(direction);
	// Translate the initial point so that the center point is the origin
	float translatedX = pInitialPoint.GetX() - pCenterPoint.GetX();
	float translatedY = pInitialPoint.GetY() - pCenterPoint.GetY();

	// Apply the rotation to the translated point
	result.SetX(cos(fRotationAngle) * translatedX + (-sin(fRotationAngle)) * translatedY);
	result.SetY(sin(fRotationAngle) * translatedX + cos(fRotationAngle) * translatedY);

	// Translate the rotated point back to its original position
	result.SetX(result.GetX() + pCenterPoint.GetX());
	result.SetY(result.GetY() + pCenterPoint.GetY());

	return result;
}

Point2D CartesianUtils::Scale(Point2D pInitialPoint, float fScalingFactorX, float fScalingFactorY) {
	Point2D result;

	result.SetX(pInitialPoint.GetX() * fScalingFactorX);
	result.SetY(pInitialPoint.GetY() * fScalingFactorY);

	return result;
}

Point3D CartesianUtils::Scale(Point3D pInitialPoint, float fScalingFactorX, float fScalingFactorY, float fScalingFactorZ) {
	Point3D result;

	result.SetX(pInitialPoint.GetX() * fScalingFactorX);
	result.SetY(pInitialPoint.GetY() * fScalingFactorY);
	result.SetZ(pInitialPoint.GetZ() * fScalingFactorZ);

	return result;
}