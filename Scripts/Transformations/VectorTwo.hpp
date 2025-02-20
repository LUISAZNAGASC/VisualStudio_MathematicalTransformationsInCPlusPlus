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

	friend std::ostream& operator<<(std::ostream& ostreamComponent, const VectorTwo& thisVectorTwo);

protected:

public:
	explicit VectorTwo();
	explicit VectorTwo(const double newX, const double newY);
	VectorTwo(const VectorTwo& otherVectorTwo);
	~VectorTwo();

	const bool operator==(const VectorTwo& otherVectorTwo) const;
	const bool operator!=(const VectorTwo& otherVectorTwo) const;

	const VectorTwo& operator=(const VectorTwo& otherVectorTwo);

	const VectorTwo operator+(const VectorTwo& otherVectorTwo) const;
	const VectorTwo operator-(const VectorTwo& otherVectorTwo) const;
	const VectorTwo operator*(const VectorTwo& otherVectorTwo) const;
	const VectorTwo operator/(const VectorTwo& otherVectorTwo) const;

	const VectorTwo& operator+=(const VectorTwo& otherVectorTwo);
	const VectorTwo& operator-=(const VectorTwo& otherVectorTwo);
	const VectorTwo& operator*=(const VectorTwo& otherVectorTwo);
	const VectorTwo& operator/=(const VectorTwo& otherVectorTwo);

	const VectorTwo operator*(const double specificValue) const;
	const VectorTwo operator/(const double specificValue) const;

	const VectorTwo& operator*=(const double specificValue);
	const VectorTwo& operator/=(const double specificValue);

	const double GetX() const;
	const double GetY() const;

	static const bool Compare(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo);

	static const double ComputeDistance(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo);

	static const double ComputeRealMagnitude(const VectorTwo& otherVectorTwo);
	static const double ComputeSquaredMagnitude(const VectorTwo& otherVectorTwo);
	static const VectorTwo ClampMagnitude(const VectorTwo& otherVectorTwo, const double maximumVectorLength);

	static const VectorTwo ComputeNormalized(const VectorTwo& otherVectorTwo);

	static const double ComputeDotProduct(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo);

	static const VectorTwo ComputeUnclampedInterpolation(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const double specificTime);
	static const VectorTwo ComputeClampedInterpolation(const VectorTwo& firstVectorTwo, const VectorTwo& secondVector, double specificTime);
	static const VectorTwo ComputeQuadraticBezierCurve(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const VectorTwo& thirdVectorTwo, const double specificTime);
	static const VectorTwo ComputeCubicBezierCurve(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const VectorTwo& thirdVectorTwo, const VectorTwo& fourthVectorTwo, const double specificTime);
};

#endif