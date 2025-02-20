#include "../../Scripts/Transformations/VectorTwo.hpp"

std::ostream& operator<<(std::ostream& ostreamComponent, const VectorTwo& thisVectorTwo)
{
	ostreamComponent << "{ ";
	ostreamComponent << "X : ";
	ostreamComponent << thisVectorTwo.GetX();
	ostreamComponent << " , ";
	ostreamComponent << "Y : ";
	ostreamComponent << thisVectorTwo.GetY();
	ostreamComponent << " }";

	return ostreamComponent;
}

VectorTwo::VectorTwo() :x(0.0), y(0.0)
{
	x = 0.0;
	y = 0.0;
}

VectorTwo::VectorTwo(const double newX, const double newY) :x(newX), y(newY)
{
	x = newX;
	y = newY;
}

VectorTwo::VectorTwo(const VectorTwo& otherVectorTwo) :x(otherVectorTwo.GetX()), y(otherVectorTwo.GetY())
{
	x = otherVectorTwo.GetX();
	y = otherVectorTwo.GetY();
}

VectorTwo::~VectorTwo()
{
	x = 0.0;
	y = 0.0;
}

const bool VectorTwo::operator==(const VectorTwo& otherVectorTwo) const
{
	const bool vectorTwoDesiredXComparison = GetX() == otherVectorTwo.GetX();
	const bool vectorTwoDesiredYComparison = GetY() == otherVectorTwo.GetY();

	return vectorTwoDesiredXComparison && vectorTwoDesiredYComparison;
}

const bool VectorTwo::operator!=(const VectorTwo& otherVectorTwo) const
{
	const bool vectorTwoDesiredXComparison = GetX() != otherVectorTwo.GetX();
	const bool vectorTwoDesiredYComparison = GetY() != otherVectorTwo.GetY();

	return vectorTwoDesiredXComparison || vectorTwoDesiredYComparison;
}

const VectorTwo& VectorTwo::operator=(const VectorTwo& otherVectorTwo)
{
	if (this == &otherVectorTwo)
	{
		return *this;
	}
	else
	{
		const double vectorTwoDesiredX = otherVectorTwo.GetX();
		const double vectorTwoDesiredY = otherVectorTwo.GetY();

		x = vectorTwoDesiredX;
		y = vectorTwoDesiredY;

		return *this;
	}
}

const VectorTwo VectorTwo::operator+(const VectorTwo& otherVectorTwo) const
{
	const double vectorTwoDesiredX = GetX() + otherVectorTwo.GetX();
	const double vectorTwoDesiredY = GetY() + otherVectorTwo.GetY();

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator-(const VectorTwo& otherVectorTwo) const
{
	const double vectorTwoDesiredX = GetX() - otherVectorTwo.GetX();
	const double vectorTwoDesiredY = GetY() - otherVectorTwo.GetY();

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator*(const VectorTwo& otherVectorTwo) const
{
	const double vectorTwoDesiredX = GetX() * otherVectorTwo.GetX();
	const double vectorTwoDesiredY = GetY() * otherVectorTwo.GetY();

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator/(const VectorTwo& otherVectorTwo) const
{
	const double vectorTwoDesiredX = GetX() / otherVectorTwo.GetX();
	const double vectorTwoDesiredY = GetY() / otherVectorTwo.GetY();

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo& VectorTwo::operator+=(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoDesiredX = GetX() + otherVectorTwo.GetX();
	const double vectorTwoDesiredY = GetY() + otherVectorTwo.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator-=(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoDesiredX = GetX() - otherVectorTwo.GetX();
	const double vectorTwoDesiredY = GetY() - otherVectorTwo.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator*=(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoDesiredX = GetX() * otherVectorTwo.GetX();
	const double vectorTwoDesiredY = GetY() * otherVectorTwo.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator/=(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoDesiredX = GetX() / otherVectorTwo.GetX();
	const double vectorTwoDesiredY = GetY() / otherVectorTwo.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo VectorTwo::operator*(const double specificValue) const
{
	const double vectorTwoDesiredX = GetX() * specificValue;
	const double vectorTwoDesiredY = GetY() * specificValue;

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator/(const double specificValue) const
{
	const double vectorTwoDesiredX = GetX() / specificValue;
	const double vectorTwoDesiredY = GetY() / specificValue;

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo& VectorTwo::operator*=(const double specificValue)
{
	const double vectorTwoDesiredX = GetX() * specificValue;
	const double vectorTwoDesiredY = GetY() * specificValue;

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator/=(const double specificValue)
{
	const double vectorTwoDesiredX = GetX() / specificValue;
	const double vectorTwoDesiredY = GetY() / specificValue;

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const double VectorTwo::GetX() const
{
	return x;
}

const double VectorTwo::GetY() const
{
	return y;
}

const bool VectorTwo::Compare(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo)
{
	const bool vectorTwoEqualityComparison = firstVectorTwo == secondVectorTwo;
	const bool vectorTwoDifferenceComparison = firstVectorTwo != secondVectorTwo;

	return vectorTwoEqualityComparison && vectorTwoDifferenceComparison;
}

const double VectorTwo::ComputeDistance(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo)
{
	const double vectorTwoFinalXDifference = firstVectorTwo.GetX() - secondVectorTwo.GetX();
	const double vectorTwoFinalYDifference = firstVectorTwo.GetY() - secondVectorTwo.GetY();

	return std::sqrt(vectorTwoFinalXDifference * vectorTwoFinalXDifference + vectorTwoFinalYDifference * vectorTwoFinalYDifference);
}

const double VectorTwo::ComputeRealMagnitude(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoXSquared = otherVectorTwo.GetX() * otherVectorTwo.GetX();
	const double vectorTwoYSquared = otherVectorTwo.GetY() * otherVectorTwo.GetY();

	return std::sqrt(vectorTwoXSquared + vectorTwoYSquared);
}

const double VectorTwo::ComputeSquaredMagnitude(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoXSquared = otherVectorTwo.GetX() * otherVectorTwo.GetX();
	const double vectorTwoYSquared = otherVectorTwo.GetY() * otherVectorTwo.GetY();

	return vectorTwoXSquared + vectorTwoYSquared;
}

const VectorTwo VectorTwo::ClampMagnitude(const VectorTwo& otherVectorTwo, const double maximumVectorLength)
{
	const double vectorTwoSquaredMagnitude = ComputeSquaredMagnitude(otherVectorTwo);

	double vectorTwoDesiredX;
	double vectorTwoDesiredY;

	if (vectorTwoSquaredMagnitude > maximumVectorLength * maximumVectorLength)
	{
		const double vectorTwoRealMagnitude = ComputeRealMagnitude(otherVectorTwo);

		const double vectorTwoXNormalized = otherVectorTwo.GetX() / vectorTwoRealMagnitude;
		const double vectorTwoYNormalized = otherVectorTwo.GetY() / vectorTwoRealMagnitude;

		vectorTwoDesiredX = vectorTwoXNormalized * maximumVectorLength;
		vectorTwoDesiredY = vectorTwoYNormalized * maximumVectorLength;
	}
	else
	{
		vectorTwoDesiredX = otherVectorTwo.GetX();
		vectorTwoDesiredY = otherVectorTwo.GetY();
	}

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::ComputeNormalized(const VectorTwo& otherVectorTwo)
{
	const float vectorTwoMagnitude = ComputeRealMagnitude(otherVectorTwo);

	double vectorTwoDesiredX;
	double vectorTwoDesiredY;

	if (vectorTwoMagnitude > 0.0)
	{
		vectorTwoDesiredX = otherVectorTwo.GetX() / vectorTwoMagnitude;
		vectorTwoDesiredY = otherVectorTwo.GetY() / vectorTwoMagnitude;
	}
	else
	{
		vectorTwoDesiredX = 0.0;
		vectorTwoDesiredY = 0.0;
	}

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const double VectorTwo::ComputeDotProduct(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo)
{
	const double vectorTwoFinalScalarX = firstVectorTwo.GetX() * secondVectorTwo.GetX();
	const double vectorTwoFinalScalarY = firstVectorTwo.GetY() * secondVectorTwo.GetY();

	return vectorTwoFinalScalarX + vectorTwoFinalScalarY;
}

const VectorTwo VectorTwo::ComputeUnclampedInterpolation(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const double specificTime)
{
	const double vectorTwoDesiredX = firstVectorTwo.GetX() + (secondVectorTwo.GetX() - firstVectorTwo.GetX()) * specificTime;
	const double vectorTwoDesiredY = firstVectorTwo.GetY() + (secondVectorTwo.GetY() - firstVectorTwo.GetY()) * specificTime;

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::ComputeClampedInterpolation(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, double specificTime)
{
	VectorTwo vectorTwoDesiredState;
	const double MinimumTime = 0.0;
	const double MaximumTime = 1.0;

	if (specificTime <= MinimumTime)
	{
		specificTime = MinimumTime;

		vectorTwoDesiredState = firstVectorTwo;
	}
	else if (specificTime >= MaximumTime)
	{
		specificTime = MaximumTime;

		vectorTwoDesiredState = secondVectorTwo;
	}
	else
	{
		vectorTwoDesiredState = ComputeUnclampedInterpolation(firstVectorTwo, secondVectorTwo, specificTime);
	}

	return vectorTwoDesiredState;
}

const VectorTwo VectorTwo::ComputeQuadraticBezierCurve(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const VectorTwo& thirdVectorTwo, const double specificTime)
{
	const VectorTwo vectorTwoDesiredABPoint = ComputeClampedInterpolation(firstVectorTwo, secondVectorTwo, specificTime);
	const VectorTwo vectorTwoDesiredBCPoint = ComputeClampedInterpolation(secondVectorTwo, thirdVectorTwo, specificTime);

	return ComputeClampedInterpolation(vectorTwoDesiredABPoint, vectorTwoDesiredBCPoint, specificTime);
}

const VectorTwo VectorTwo::ComputeCubicBezierCurve(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const VectorTwo& thirdVectorTwo, const VectorTwo& fourthVectorTwo, const double specificTime)
{
	const VectorTwo vectorTwoDesiredABCPoint = ComputeQuadraticBezierCurve(firstVectorTwo, secondVectorTwo, thirdVectorTwo, specificTime);
	const VectorTwo vectorTwoDesiredBCDPoint = ComputeQuadraticBezierCurve(secondVectorTwo, thirdVectorTwo, fourthVectorTwo, specificTime);

	return ComputeClampedInterpolation(vectorTwoDesiredABCPoint, vectorTwoDesiredBCDPoint, specificTime);
}