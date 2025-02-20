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

	friend std::ostream& operator<<(std::ostream& ostreamComponent, const VectorThree& thisVectorThree);

protected:

public:
	explicit VectorThree();
	explicit VectorThree(const double newX, const double newY, const double newZ);
	VectorThree(const VectorThree& otherVectorThree);
	~VectorThree();

	const bool operator==(const VectorThree& otherVectorThree) const;
	const bool operator!=(const VectorThree& otherVectorThree) const;

	const VectorThree& operator=(const VectorThree& otherVectorThree);

	const VectorThree operator+(const VectorThree& otherVectorThree) const;
	const VectorThree operator-(const VectorThree& otherVectorThree) const;
	const VectorThree operator*(const VectorThree& otherVectorThree) const;
	const VectorThree operator/(const VectorThree& otherVectorThree) const;

	const VectorThree& operator+=(const VectorThree& otherVectorThree);
	const VectorThree& operator-=(const VectorThree& otherVectorThree);
	const VectorThree& operator*=(const VectorThree& otherVectorThree);
	const VectorThree& operator/=(const VectorThree& otherVectorThree);

	const VectorThree operator*(const double specificValue) const;
	const VectorThree operator/(const double specificValue) const;

	const VectorThree& operator*=(const double specificValue);
	const VectorThree& operator/=(const double specificValue);

	const double GetX() const;
	const double GetY() const;
	const double GetZ() const;

	static const bool Compare(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree);

	static const double ComputeDistance(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree);

	static const double ComputeRealMagnitude(const VectorThree& otherVectorThree);
	static const double ComputeSquaredMagnitude(const VectorThree& otherVectorThree);
	static const VectorThree ClampMagnitude(const VectorThree& otherVectorThree, const double maximumVectorLength);

	static const VectorThree ComputeNormalized(const VectorThree& otherVectorThree);

	static const double ComputeDotProduct(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree);
	static const VectorThree ComputeCrossProduct(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree);

	static const VectorThree ComputeUnclampedInterpolation(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const double specificTime);
	static const VectorThree ComputeClampedInterpolation(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, double specificTime);
	static const VectorThree ComputeQuadraticBezierCurve(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const VectorThree& thirdVectorThree, const double specificTime);
	static const VectorThree ComputeCubicBezierCurve(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const VectorThree& thirdVectorThree, const VectorThree& fourthVectorThree, const double specificTimeToCompute);
};

#endif