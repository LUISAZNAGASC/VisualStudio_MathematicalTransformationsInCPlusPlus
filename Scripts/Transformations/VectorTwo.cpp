#include "../../Scripts/Transformations/VectorTwo.hpp"

std::ostream& operator<<(std::ostream& ostreamComponentToDisplay, const VectorTwo& thisVectorTwoToDisplay)
{
	ostreamComponentToDisplay << "{ ";
	ostreamComponentToDisplay << "X : ";
	ostreamComponentToDisplay << thisVectorTwoToDisplay.GetX();
	ostreamComponentToDisplay << " , ";
	ostreamComponentToDisplay << "Y : ";
	ostreamComponentToDisplay << thisVectorTwoToDisplay.GetY();
	ostreamComponentToDisplay << " }";

	return ostreamComponentToDisplay;
}

VectorTwo::VectorTwo() :x(0.0), y(0.0)
{
	x = 0.0;
	y = 0.0;
}

VectorTwo::VectorTwo(const double newXToInitialize, const double newYToInitialize) :x(newXToInitialize), y(newYToInitialize)
{
	x = newXToInitialize;
	y = newYToInitialize;
}

VectorTwo::VectorTwo(const VectorTwo& otherVectorTwoToCopy) :x(otherVectorTwoToCopy.GetX()), y(otherVectorTwoToCopy.GetY())
{
	x = otherVectorTwoToCopy.GetX();
	y = otherVectorTwoToCopy.GetY();
}

VectorTwo::~VectorTwo()
{
	x = 0.0;
	y = 0.0;
}

const bool VectorTwo::operator==(const VectorTwo& otherVectorTwoToCompare) const
{
	const bool vectorTwoDesiredXComparison = GetX() == otherVectorTwoToCompare.GetX();
	const bool vectorTwoDesiredYComparison = GetY() == otherVectorTwoToCompare.GetY();

	return vectorTwoDesiredXComparison == true && vectorTwoDesiredYComparison == true;
}

const bool VectorTwo::operator!=(const VectorTwo& otherVectorTwoToCompare) const
{
	const bool vectorTwoDesiredXComparison = GetX() != otherVectorTwoToCompare.GetX();
	const bool vectorTwoDesiredYComparison = GetY() != otherVectorTwoToCompare.GetY();

	return vectorTwoDesiredXComparison == true || vectorTwoDesiredYComparison == true;
}

const VectorTwo& VectorTwo::operator=(const VectorTwo& otherVectorTwoToAssign)
{
	if (this == &otherVectorTwoToAssign)
	{
		return *this;
	}
	else
	{
		const double vectorTwoDesiredX = otherVectorTwoToAssign.GetX();
		const double vectorTwoDesiredY = otherVectorTwoToAssign.GetY();

		x = vectorTwoDesiredX;
		y = vectorTwoDesiredY;

		return *this;
	}
}

const VectorTwo VectorTwo::operator+(const VectorTwo& otherVectorTwoToAssign) const
{
	const double vectorTwoDesiredX = GetX() + otherVectorTwoToAssign.GetX();
	const double vectorTwoDesiredY = GetY() + otherVectorTwoToAssign.GetY();

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator-(const VectorTwo& otherVectorTwoToAssign) const
{
	const double vectorTwoDesiredX = GetX() - otherVectorTwoToAssign.GetX();
	const double vectorTwoDesiredY = GetY() - otherVectorTwoToAssign.GetY();

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator*(const VectorTwo& otherVectorTwoToAssign) const
{
	const double vectorTwoDesiredX = GetX() * otherVectorTwoToAssign.GetX();
	const double vectorTwoDesiredY = GetY() * otherVectorTwoToAssign.GetY();

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator/(const VectorTwo& otherVectorTwoToAssign) const
{
	const double vectorTwoDesiredX = GetX() / otherVectorTwoToAssign.GetX();
	const double vectorTwoDesiredY = GetY() / otherVectorTwoToAssign.GetY();

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo& VectorTwo::operator+=(const VectorTwo& otherVectorTwoToAssign)
{
	const double vectorTwoDesiredX = GetX() + otherVectorTwoToAssign.GetX();
	const double vectorTwoDesiredY = GetY() + otherVectorTwoToAssign.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator-=(const VectorTwo& otherVectorTwoToAssign)
{
	const double vectorTwoDesiredX = GetX() - otherVectorTwoToAssign.GetX();
	const double vectorTwoDesiredY = GetY() - otherVectorTwoToAssign.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator*=(const VectorTwo& otherVectorTwoToAssign)
{
	const double vectorTwoDesiredX = GetX() * otherVectorTwoToAssign.GetX();
	const double vectorTwoDesiredY = GetY() * otherVectorTwoToAssign.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator/=(const VectorTwo& otherVectorTwoToAssign)
{
	const double vectorTwoDesiredX = GetX() / otherVectorTwoToAssign.GetX();
	const double vectorTwoDesiredY = GetY() / otherVectorTwoToAssign.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo VectorTwo::operator*(const double specificValueToAssign) const
{
	const double vectorTwoDesiredX = GetX() * specificValueToAssign;
	const double vectorTwoDesiredY = GetY() * specificValueToAssign;

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator/(const double specificValueToAssign) const
{
	const double vectorTwoDesiredX = GetX() / specificValueToAssign;
	const double vectorTwoDesiredY = GetY() / specificValueToAssign;

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo& VectorTwo::operator*=(const double specificValueToAssign)
{
	const double vectorTwoDesiredX = GetX() * specificValueToAssign;
	const double vectorTwoDesiredY = GetY() * specificValueToAssign;

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator/=(const double specificValueToAssign)
{
	const double vectorTwoDesiredX = GetX() / specificValueToAssign;
	const double vectorTwoDesiredY = GetY() / specificValueToAssign;

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

const bool VectorTwo::CompareBetween(const VectorTwo& firstVectorTwoToCompare, const VectorTwo& secondVectorTwoToCompare)
{
	const bool vectorTwoEqualityComparison = firstVectorTwoToCompare == secondVectorTwoToCompare;
	const bool vectorTwoDifferenceComparison = firstVectorTwoToCompare != secondVectorTwoToCompare;

	return vectorTwoEqualityComparison == true && vectorTwoDifferenceComparison == true;
}

const double VectorTwo::ComputeDistanceBetween(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute)
{
	const double vectorTwoFinalXDifference = firstVectorTwoToCompute.GetX() - secondVectorTwoToCompute.GetX();
	const double vectorTwoFinalYDifference = firstVectorTwoToCompute.GetY() - secondVectorTwoToCompute.GetY();

	return std::sqrt(vectorTwoFinalXDifference * vectorTwoFinalXDifference + vectorTwoFinalYDifference * vectorTwoFinalYDifference);
}

const double VectorTwo::ComputeRealMagnitudeUsing(const VectorTwo& otherVectorTwoToCompute)
{
	const double otherVectorTwoXSquared = otherVectorTwoToCompute.GetX() * otherVectorTwoToCompute.GetX();
	const double otherVectorTwoYSquared = otherVectorTwoToCompute.GetY() * otherVectorTwoToCompute.GetY();

	return std::sqrt(otherVectorTwoXSquared + otherVectorTwoYSquared);
}

const double VectorTwo::ComputeSquaredMagnitudeUsing(const VectorTwo& otherVectorTwoToCompute)
{
	const double otherVectorTwoXSquared = otherVectorTwoToCompute.GetX() * otherVectorTwoToCompute.GetX();
	const double otherVectorTwoYSquared = otherVectorTwoToCompute.GetY() * otherVectorTwoToCompute.GetY();

	return otherVectorTwoXSquared + otherVectorTwoYSquared;
}

const VectorTwo VectorTwo::ClampMagnitudeUsing(const VectorTwo& otherVectorTwoToCompute, const double maximumVectorLengthToCompute)
{
	const double otherVectorTwoSquaredMagnitude = ComputeSquaredMagnitudeUsing(otherVectorTwoToCompute);

	double otherVectorTwoDesiredX;
	double otherVectorTwoDesiredY;

	if (otherVectorTwoSquaredMagnitude > maximumVectorLengthToCompute * maximumVectorLengthToCompute)
	{
		const double otherVectorTwoRealMagnitude = ComputeRealMagnitudeUsing(otherVectorTwoToCompute);

		const double otherVectorTwoXNormalized = otherVectorTwoToCompute.GetX() / otherVectorTwoRealMagnitude;
		const double otherVectorTwoYNormalized = otherVectorTwoToCompute.GetY() / otherVectorTwoRealMagnitude;

		otherVectorTwoDesiredX = otherVectorTwoXNormalized * maximumVectorLengthToCompute;
		otherVectorTwoDesiredY = otherVectorTwoYNormalized * maximumVectorLengthToCompute;
	}
	else
	{
		otherVectorTwoDesiredX = otherVectorTwoToCompute.GetX();
		otherVectorTwoDesiredY = otherVectorTwoToCompute.GetY();
	}

	return VectorTwo(otherVectorTwoDesiredX, otherVectorTwoDesiredY);
}

const VectorTwo VectorTwo::ComputeNormalizedUsing(const VectorTwo& otherVectorTwoToCompute)
{
	const float otherVectorTwoMagnitude = ComputeRealMagnitudeUsing(otherVectorTwoToCompute);

	double vectorTwoDesiredX;
	double vectorTwoDesiredY;

	if (otherVectorTwoMagnitude > 0.0)
	{
		vectorTwoDesiredX = otherVectorTwoToCompute.GetX() / otherVectorTwoMagnitude;
		vectorTwoDesiredY = otherVectorTwoToCompute.GetY() / otherVectorTwoMagnitude;
	}
	else
	{
		vectorTwoDesiredX = 0.0;
		vectorTwoDesiredY = 0.0;
	}

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const double VectorTwo::ComputeDotProductUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute)
{
	const double vectorTwoFinalScalarX = firstVectorTwoToCompute.GetX() * secondVectorTwoToCompute.GetX();
	const double vectorTwoFinalScalarY = firstVectorTwoToCompute.GetY() * secondVectorTwoToCompute.GetY();

	return vectorTwoFinalScalarX + vectorTwoFinalScalarY;
}

const VectorTwo VectorTwo::ComputeUnclampedInterpolationUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute, const double specificTimeToCompute)
{
	const double vectorTwoDesiredX = firstVectorTwoToCompute.x + (secondVectorTwoToCompute.x - firstVectorTwoToCompute.x) * specificTimeToCompute;
	const double vectorTwoDesiredY = firstVectorTwoToCompute.y + (secondVectorTwoToCompute.y - firstVectorTwoToCompute.y) * specificTimeToCompute;

	return VectorTwo(vectorTwoDesiredX, vectorTwoDesiredY);
}

const VectorTwo VectorTwo::ComputeClampedInterpolationUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute, double specificTimeToCompute)
{
	VectorTwo vectorTwoDesiredState;
	const double MinimumTimeToCompute = 0.0;
	const double MaximumTimeToCompute = 1.0;

	if (specificTimeToCompute <= MinimumTimeToCompute)
	{
		specificTimeToCompute = MinimumTimeToCompute;

		vectorTwoDesiredState = firstVectorTwoToCompute;
	}
	else if (specificTimeToCompute >= MaximumTimeToCompute)
	{
		specificTimeToCompute = MaximumTimeToCompute;

		vectorTwoDesiredState = secondVectorTwoToCompute;
	}
	else
	{
		vectorTwoDesiredState = ComputeUnclampedInterpolationUsing(firstVectorTwoToCompute, secondVectorTwoToCompute, specificTimeToCompute);
	}

	return vectorTwoDesiredState;
}

const VectorTwo VectorTwo::ComputeQuadraticBezierCurveUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute, const VectorTwo& thirdVectorTwoToCompute, const double specificTimeToCompute)
{
	const VectorTwo vectorTwoDesiredABPoint = ComputeClampedInterpolationUsing(firstVectorTwoToCompute, secondVectorTwoToCompute, specificTimeToCompute);
	const VectorTwo vectorTwoDesiredBCPoint = ComputeClampedInterpolationUsing(secondVectorTwoToCompute, thirdVectorTwoToCompute, specificTimeToCompute);

	return ComputeClampedInterpolationUsing(vectorTwoDesiredABPoint, vectorTwoDesiredBCPoint, specificTimeToCompute);
}

const VectorTwo VectorTwo::ComputeCubicBezierCurveUsing(const VectorTwo& firstVectorTwoToCompute, const VectorTwo& secondVectorTwoToCompute, const VectorTwo& thirdVectorTwoToCompute, const VectorTwo& fourthVectorTwoToCompute, const double specificTimeToCompute)
{
	const VectorTwo vectorTwoDesiredABCPoint = ComputeQuadraticBezierCurveUsing(firstVectorTwoToCompute, secondVectorTwoToCompute, thirdVectorTwoToCompute, specificTimeToCompute);
	const VectorTwo vectorTwoDesiredBCDPoint = ComputeQuadraticBezierCurveUsing(secondVectorTwoToCompute, thirdVectorTwoToCompute, fourthVectorTwoToCompute, specificTimeToCompute);

	return ComputeClampedInterpolationUsing(vectorTwoDesiredABCPoint, vectorTwoDesiredBCDPoint, specificTimeToCompute);
}