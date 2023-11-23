#pragma once
#include "Point3D.h"

class CartesianUtils
{
public:
	enum class Direction {
		Clockwise = -1,
		Counterclockwise = 1
	};
	/**
	 * @brief Calculates the distance between 2 points in 2D
	 * @param FirstPoint First point from witch to calculate distance
	 * @param SecondPoint Second point to witch to calculate distance
	 * @return The value of the calculated distance
	*/
	static float Distance(Point2D FirstPoint, Point2D SecondPoint);
	/**
	 * @brief Calculates the distance between 2 points in 2D
	 * @param FirstPoint First point from witch to calculate distance
	 * @param SecondPoint Second point to witch to calculate distance
	 * @return The value of the calculated distance
	*/
	static float Distance(Point3D pFirstPoint, Point3D pSecondPoint);

	/**
	 * @brief Makes the transaltion of a 2D point with given coordinates
	 * @param Point The point to be transalted
	 * @param TranslationOnX The value with wich to be translated the X coordonate
	 * @param TranslationOnY The value with wich to be translated the Y coordonate
	 * @return The translated point
	*/
	static Point2D Offset(Point2D pPoint, float fTranslationOnX, float fTranslationOnY);
	/**
	 * @brief Scales of a 2D point with given factors
	 * @param Point The point to be scaled
	 * @param fScalingFactorX The scaling factor for X
	 * @param fScalingFactorY The scaling factor for Y
	 * @return The scaled point
	*/
	static Point2D Scale(Point2D pInitialPoint, float fScalingFactorX, float fScalingFactorY);
	/**
	 * @brief Makes the rotation of a 2D point with given coordinates around the origin
	 * @param pInitialPoint The point to be rotated
	 * @param fRotationAngle The value of the angle with wich the point is to be rotated (radians)
	 * @return The rotated point
	*/
	static Point2D Rotate(Point2D pInitialPoint, float fRotationAngle);

	/**
 * @brief Makes the rotation of a 2D point with given coordinates around the origin with a DIRECTION
 * @param pInitialPoint The point to be rotated
 * @param fRotationAngle The value of the angle with wich the point is to be rotated (radians)
 * @param eDirection The direction of which rotation is being made
 * @return The rotated point
*/
	static Point2D Rotate(Point2D pInitialPoint, float fRotationAngle, Direction direction);

	/**
* @brief Makes the rotation of a 2D point with given coordinates around another point
* @param pInitialPoint The point to be rotated
* @param pCenterPoint The reference around which the first point rotates
* @param fRotationAngle The value of the angle with wich the point is to be rotated (radians)
* @return The rotated point
*/
	static Point2D RotateAroundPoint(Point2D pInitialPoint, Point2D pCenterPoint, float fRotationAngle);

	/**
* @brief Makes the rotation of a 2D point with given coordinates around another point with a DIRECTION
* @param pInitialPoint The point to be rotated
* @param pCenterPoint The reference around which the first point rotates
* @param fRotationAngle The value of the angle with wich the point is to be rotated (radians)
* @param eDirection The direction of which rotation is being made
* @return The rotated point
*/
	static Point2D RotateAroundPoint(Point2D pInitialPoint, Point2D pCenterPoint, float fRotationAngle, Direction direction);

	/**
	 * @brief Makes the transaltion of a 3D point with given coordinates
	 * @param Point The point to be transalted
	 * @param TranslationOnX The value with wich to be translated the X coordonate
	 * @param TranslationOnY The value with wich to be translated the Y coordonate
	 * @param TranslationOnZ The value with wich to be translated the Z coordonate
	 * @return The translated point
	*/
	static Point3D Offset(Point3D pPoint, float fTranslationOnX, float fTranslationOnY, float fTranslationOnZ);
	/**
	 * @brief Scales of a 3D point with given factors
	 * @param Point The point to be scaled
	 * @param fScalingFactorX The scaling factor for X
	 * @param fScalingFactorY The scaling factor for Y
	 * @param fScalingFactorZ The scaling factor for Z
	 * @return The scaled point
	*/
	static Point3D Scale(Point3D pInitialPoint, float fScalingFactorX, float fScalingFactorY, float fScalingFactorZ);
};
