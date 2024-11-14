#ifndef _VECTOR_THREE_HPP_
#define _VECTOR_THREE_HPP_

#include <iostream>
#include <cmath>

#pragma once
class VectorThree
{
private:
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;

	friend std::ostream& operator<<(std::ostream& ostreamComponentToDisplay, const VectorThree& thisVectorThreeToDisplay);

protected:

public:
	explicit VectorThree();
	explicit VectorThree(const double newXToInitialize, const double newYToInitialize, const double newZToInitialize);
	VectorThree(const VectorThree& otherVectorThreeToCopy);
	~VectorThree();

	const bool operator==(const VectorThree& otherVectorThreeToCompare) const;
	const bool operator!=(const VectorThree& otherVectorThreeToCompare) const;

	const VectorThree& operator=(const VectorThree& otherVectorThreeToAssign);

	const VectorThree operator+(const VectorThree& otherVectorThreeToAssign) const;
	const VectorThree operator-(const VectorThree& otherVectorThreeToAssign) const;
	const VectorThree operator*(const VectorThree& otherVectorThreeToAssign) const;
	const VectorThree operator/(const VectorThree& otherVectorThreeToAssign) const;

	const VectorThree& operator+=(const VectorThree& otherVectorThreeToAssign);
	const VectorThree& operator-=(const VectorThree& otherVectorThreeToAssign);
	const VectorThree& operator*=(const VectorThree& otherVectorThreeToAssign);
	const VectorThree& operator/=(const VectorThree& otherVectorThreeToAssign);

	const VectorThree operator*(const double specificValueToAssign) const;
	const VectorThree operator/(const double specificValueToAssign) const;

	const VectorThree& operator*=(const double specificValueToAssign);
	const VectorThree& operator/=(const double specificValueToAssign);

	const double GetX() const;
	const double GetY() const;
	const double GetZ() const;

	static const bool CompareBetween(const VectorThree& firstVectorThreeToCompare, const VectorThree& secondVectorThreeToCompare);

	static const double ComputeDistanceBetween(const VectorThree& firstVectorThreeToCompute, const VectorThree& secondVectorThreeToCompute);

	static const double ComputeRealMagnitudeUsing(const VectorThree& otherVectorThreeToCompute);
	static const double ComputeSquaredMagnitudeUsing(const VectorThree& otherVectorThreeToCompute);
	static const VectorThree ClampMagnitudeUsing(const VectorThree& otherVectorThreeToCompute, const double maximumVectorLengthToCompute);

	static const VectorThree ComputeNormalizedUsing(const VectorThree& otherVectorThreeToCompute);

	static const double ComputeDotProductUsing(const VectorThree& firstVectorThreeToCompute, const VectorThree& secondVectorThreeToCompute);
	static const VectorThree ComputeCrossProductUsing(const VectorThree& firstVectorThreeToCompute, const VectorThree& secondVectorThreeToCompute);

	static const VectorThree ComputeUnclampedInterpolationUsing(const VectorThree& firstVectorThreeToCompute, const VectorThree& secondVectorThreeToCompute, const double specificTimeToCompute);
	static const VectorThree ComputeClampedInterpolationUsing(const VectorThree& firstVectorThreeToCompute, const VectorThree& secondVectorThreeToCompute, double specificTimeToCompute);
	static const VectorThree ComputeQuadraticBezierCurveUsing(const VectorThree& firstVectorThreeToCompute, const VectorThree& secondVectorThreeToCompute, const VectorThree& thirdVectorThreeToCompute, const double specificTimeToCompute);
	static const VectorThree ComputeCubicBezierCurveUsing(const VectorThree& firstVectorThreeToCompute, const VectorThree& secondVectorThreeToCompute, const VectorThree& thirdVectorThreeToCompute, const VectorThree& fourthVectorThreeToCompute, const double specificTimeToCompute);
};

#endif