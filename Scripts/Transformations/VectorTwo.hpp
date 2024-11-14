#ifndef _VECTOR_TWO_HPP_
#define _VECTOR_TWO_HPP_

#include <iostream>
#include <cmath>

#pragma once
class VectorTwo
{
private:
	double x = 0.0;
	double y = 0.0;

	friend std::ostream& operator<<(std::ostream& ostreamComponentToDisplay, const VectorTwo& thisVectorTwoToDisplay);

protected:

public:
	explicit VectorTwo();
	explicit VectorTwo(const double newXToInitialize, const double newYToInitialize);
	VectorTwo(const VectorTwo& otherVectorTwoToCopy);
	~VectorTwo();

	const bool operator==(const VectorTwo& otherVectorTwoToCompare) const;
	const bool operator!=(const VectorTwo& otherVectorTwoToCompare) const;

	const VectorTwo& operator=(const VectorTwo& otherVectorTwoToAssign);

	const VectorTwo operator+(const VectorTwo& otherVectorTwoToAssign) const;
	const VectorTwo operator-(const VectorTwo& otherVectorTwoToAssign) const;
	const VectorTwo operator*(const VectorTwo& otherVectorTwoToAssign) const;
	const VectorTwo operator/(const VectorTwo& otherVectorTwoToAssign) const;

	const VectorTwo& operator+=(const VectorTwo& otherVectorTwoToAssign);
	const VectorTwo& operator-=(const VectorTwo& otherVectorTwoToAssign);
	const VectorTwo& operator*=(const VectorTwo& otherVectorTwoToAssign);
	const VectorTwo& operator/=(const VectorTwo& otherVectorTwoToAssign);

	const VectorTwo operator*(const double specificValueToAssign) const;
	const VectorTwo operator/(const double specificValueToAssign) const;

	const VectorTwo& operator*=(const double specificValueToAssign);
	const VectorTwo& operator/=(const double specificValueToAssign);

	const double GetX() const;
	const double GetY() const;

	static const bool CompareBetween(const VectorTwo& firstVectorTwoToCompare, const VectorTwo& secondVectorTwoToCompare);

	static const double ComputeDistanceBetween(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute);

	static const double ComputeRealMagnitudeUsing(const VectorTwo& otherVectorTwoToCompute);
	static const double ComputeSquaredMagnitudeUsing(const VectorTwo& otherVectorTwoToCompute);
	static const VectorTwo ClampMagnitudeUsing(const VectorTwo& otherVectorTwoToCompute, const double maximumVectorLengthToCompute);

	static const VectorTwo ComputeNormalizedUsing(const VectorTwo& otherVectorTwoToCompute);

	static const double ComputeDotProductUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute);

	static const VectorTwo ComputeUnclampedInterpolationUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute, const double specificTimeToCompute);
	static const VectorTwo ComputeClampedInterpolationUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorToCompute, double specificTimeToCompute);
	static const VectorTwo ComputeQuadraticBezierCurveUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute, const VectorTwo& thirdVectorTwoToCompute, const double specificTimeToCompute);
	static const VectorTwo ComputeCubicBezierCurveUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute, const VectorTwo& thirdVectorTwoToCompute, const VectorTwo& fourthVectorTwoToCompute, const double specificTimeToCompute);
};

#endif