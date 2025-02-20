#include "../../Scripts/Transformations/VectorThree.hpp"

std::ostream& operator<<(std::ostream& ostreamComponent, const VectorThree& thisVectorThree)
{
	ostreamComponent << "{ ";
	ostreamComponent << "X: ";
	ostreamComponent << thisVectorThree.GetX();
	ostreamComponent << ", ";
	ostreamComponent << "Y: ";
	ostreamComponent << thisVectorThree.GetY();
	ostreamComponent << ", ";
	ostreamComponent << "Z: ";
	ostreamComponent << thisVectorThree.GetZ();
	ostreamComponent << " }";

	return ostreamComponent;
}

VectorThree::VectorThree() :x(0.0), y(0.0), z(0.0)
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

VectorThree::VectorThree(const double newX, const double newY, const double newZ) :x(newX), y(newY), z(newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

VectorThree::VectorThree(const VectorThree& otherVectorThree) :x(otherVectorThree.GetX()), y(otherVectorThree.GetY()), z(otherVectorThree.GetZ())
{
	x = otherVectorThree.GetX();
	y = otherVectorThree.GetY();
	z = otherVectorThree.GetZ();
}

VectorThree::~VectorThree()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

const bool VectorThree::operator==(const VectorThree& otherVectorThree) const
{
	const bool vectorThreeDesiredXComparison = GetX() == otherVectorThree.GetX();
	const bool vectorThreeDesiredYComparison = GetY() == otherVectorThree.GetY();
	const bool vectorThreeDesiredZComparison = GetZ() == otherVectorThree.GetZ();

	return vectorThreeDesiredXComparison && vectorThreeDesiredYComparison && vectorThreeDesiredZComparison;
}

const bool VectorThree::operator!=(const VectorThree& otherVectorThree) const
{
	const bool vectorThreeDesiredXComparison = GetX() != otherVectorThree.GetX();
	const bool vectorThreeDesiredYComparison = GetY() != otherVectorThree.GetY();
	const bool vectorThreeDesiredZComparison = GetZ() != otherVectorThree.GetZ();

	return vectorThreeDesiredXComparison || vectorThreeDesiredYComparison || vectorThreeDesiredZComparison;
}

const VectorThree& VectorThree::operator=(const VectorThree& otherVectorThree)
{
	if (this == &otherVectorThree)
	{
		return *this;
	}
	else
	{
		const double vectorThreeDesiredX = otherVectorThree.GetX();
		const double vectorThreeDesiredY = otherVectorThree.GetY();
		const double vectorThreeDesiredZ = otherVectorThree.GetZ();

		x = vectorThreeDesiredX;
		y = vectorThreeDesiredY;
		z = vectorThreeDesiredZ;

		return *this;
	}
}

const VectorThree VectorThree::operator+(const VectorThree& otherVectorThree) const
{
	const double vectorThreeDesiredX = GetX() + otherVectorThree.GetX();
	const double vectorThreeDesiredY = GetY() + otherVectorThree.GetY();
	const double vectorThreeDesiredZ = GetZ() + otherVectorThree.GetZ();

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator-(const VectorThree& otherVectorThree) const
{
	const double vectorThreeDesiredX = GetX() - otherVectorThree.GetX();
	const double vectorThreeDesiredY = GetY() - otherVectorThree.GetY();
	const double vectorThreeDesiredZ = GetZ() - otherVectorThree.GetZ();

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator*(const VectorThree& otherVectorThree) const
{
	const double vectorThreeDesiredX = GetX() * otherVectorThree.GetX();
	const double vectorThreeDesiredY = GetY() * otherVectorThree.GetY();
	const double vectorThreeDesiredZ = GetZ() * otherVectorThree.GetZ();

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator/(const VectorThree& otherVectorThree) const
{
	const double vectorThreeDesiredX = GetX() / otherVectorThree.GetX();
	const double vectorThreeDesiredY = GetY() / otherVectorThree.GetY();
	const double vectorThreeDesiredZ = GetZ() / otherVectorThree.GetZ();

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree& VectorThree::operator+=(const VectorThree& otherVectorThree)
{
	const double vectorThreeDesiredX = GetX() + otherVectorThree.GetX();
	const double vectorThreeDesiredY = GetY() + otherVectorThree.GetY();
	const double vectorThreeDesiredZ = GetZ() + otherVectorThree.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator-=(const VectorThree& otherVectorThree)
{
	const double vectorThreeDesiredX = GetX() - otherVectorThree.GetX();
	const double vectorThreeDesiredY = GetY() - otherVectorThree.GetY();
	const double vectorThreeDesiredZ = GetZ() - otherVectorThree.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator*=(const VectorThree& otherVectorThree)
{
	const double vectorThreeDesiredX = GetX() * otherVectorThree.GetX();
	const double vectorThreeDesiredY = GetY() * otherVectorThree.GetY();
	const double vectorThreeDesiredZ = GetZ() * otherVectorThree.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator/=(const VectorThree& otherVectorThree)
{
	const double vectorThreeDesiredX = GetX() / otherVectorThree.GetX();
	const double vectorThreeDesiredY = GetY() / otherVectorThree.GetY();
	const double vectorThreeDesiredZ = GetZ() / otherVectorThree.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree VectorThree::operator*(const double specificValue) const
{
	const double vectorThreeDesiredX = GetX() * specificValue;
	const double vectorThreeDesiredY = GetY() * specificValue;
	const double vectorThreeDesiredZ = GetZ() * specificValue;

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator/(const double specificValue) const
{
	const double vectorThreeDesiredX = GetX() / specificValue;
	const double vectorThreeDesiredY = GetY() / specificValue;
	const double vectorThreeDesiredZ = GetZ() / specificValue;

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree& VectorThree::operator*=(const double specificValue)
{
	const double vectorThreeDesiredX = GetX() * specificValue;
	const double vectorThreeDesiredY = GetY() * specificValue;
	const double vectorThreeDesiredZ = GetZ() * specificValue;

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator/=(const double specificValue)
{
	const double vectorThreeDesiredX = GetX() / specificValue;
	const double vectorThreeDesiredY = GetY() / specificValue;
	const double vectorThreeDesiredZ = GetZ() / specificValue;

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const double VectorThree::GetX() const
{
	return x;
}

const double VectorThree::GetY() const
{
	return y;
}

const double VectorThree::GetZ() const
{
	return z;
}

const bool VectorThree::Compare(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree)
{
	const bool vectorThreeEqualityComparison = firstVectorThree == secondVectorThree;
	const bool vectorThreeDifferenceComparison = firstVectorThree != secondVectorThree;

	return vectorThreeEqualityComparison && vectorThreeDifferenceComparison;
}

const double VectorThree::ComputeDistance(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree)
{
	const double vectorThreeFinalXDifference = firstVectorThree.GetX() - secondVectorThree.GetX();
	const double vectorThreeFinalYDifference = firstVectorThree.GetY() - secondVectorThree.GetY();
	const double vectorThreeFinalZDifference = firstVectorThree.GetZ() - secondVectorThree.GetZ();

	return std::sqrt(vectorThreeFinalXDifference * vectorThreeFinalXDifference + vectorThreeFinalYDifference * vectorThreeFinalYDifference + vectorThreeFinalZDifference * vectorThreeFinalZDifference);
}

const double VectorThree::ComputeRealMagnitude(const VectorThree& otherVectorThree)
{
	const double vectorThreeXSquared = otherVectorThree.GetX() * otherVectorThree.GetX();
	const double vectorThreeYSquared = otherVectorThree.GetY() * otherVectorThree.GetY();
	const double vectorThreeZSquared = otherVectorThree.GetZ() * otherVectorThree.GetZ();

	return std::sqrt(vectorThreeXSquared + vectorThreeYSquared + vectorThreeZSquared);
}

const double VectorThree::ComputeSquaredMagnitude(const VectorThree& otherVectorThree)
{
	const double vectorThreeXSquared = otherVectorThree.GetX() * otherVectorThree.GetX();
	const double vectorThreeYSquared = otherVectorThree.GetY() * otherVectorThree.GetY();
	const double vectorThreeZSquared = otherVectorThree.GetZ() * otherVectorThree.GetZ();

	return vectorThreeXSquared + vectorThreeYSquared + vectorThreeZSquared;
}

const VectorThree VectorThree::ClampMagnitude(const VectorThree& otherVectorThree, const double maximumVectorLength)
{
	const double vectorThrreeSquaredMagnitude = ComputeSquaredMagnitude(otherVectorThree);

	double vectorThreeDesiredX;
	double vectorThreeDesiredY;
	double vectorThreeDesiredZ;

	if (vectorThrreeSquaredMagnitude > maximumVectorLength * maximumVectorLength)
	{
		const double vectorThreeRealMagnitude = ComputeRealMagnitude(otherVectorThree);

		const double vectorThreeXNormalized = otherVectorThree.GetX() / vectorThreeRealMagnitude;
		const double vectorThreeYNormalized = otherVectorThree.GetY() / vectorThreeRealMagnitude;
		const double vectorThreeZNormalized = otherVectorThree.GetZ() / vectorThreeRealMagnitude;

		vectorThreeDesiredX = vectorThreeXNormalized * maximumVectorLength;
		vectorThreeDesiredY = vectorThreeYNormalized * maximumVectorLength;
		vectorThreeDesiredZ = vectorThreeZNormalized * maximumVectorLength;
	}
	else
	{
		vectorThreeDesiredX = otherVectorThree.GetX();
		vectorThreeDesiredY = otherVectorThree.GetY();
		vectorThreeDesiredZ = otherVectorThree.GetZ();
	}

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree VectorThree::ComputeNormalized(const VectorThree& otherVectorThree)
{
	const float vectorThreeMagnitude = ComputeRealMagnitude(otherVectorThree);

	double vectorThreeDesiredX;
	double vectorThreeDesiredY;
	double vectorThreeDesiredZ;

	if (vectorThreeMagnitude > 0.0)
	{
		vectorThreeDesiredX = otherVectorThree.GetX() / vectorThreeMagnitude;
		vectorThreeDesiredY = otherVectorThree.GetY() / vectorThreeMagnitude;
		vectorThreeDesiredZ = otherVectorThree.GetZ() / vectorThreeMagnitude;
	}
	else
	{
		vectorThreeDesiredX = 0.0;
		vectorThreeDesiredY = 0.0;
		vectorThreeDesiredZ = 0.0;
	}

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const double VectorThree::ComputeDotProduct(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree)
{
	const double vectorThreeFinalScalarX = firstVectorThree.GetX() * secondVectorThree.GetX();
	const double vectorThreeFinalScalarY = firstVectorThree.GetY() * secondVectorThree.GetY();
	const double vectorThreeFinalScalarZ = firstVectorThree.GetZ() * secondVectorThree.GetZ();

	return vectorThreeFinalScalarX + vectorThreeFinalScalarY + vectorThreeFinalScalarZ;
}

const VectorThree VectorThree::ComputeCrossProduct(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree)
{
	const double vectorThreeDesiredX = firstVectorThree.GetY() * secondVectorThree.GetZ() - firstVectorThree.GetZ() * secondVectorThree.GetY();
	const double vectorThreeDesiredY = firstVectorThree.GetZ() * secondVectorThree.GetX() - firstVectorThree.GetX() * secondVectorThree.GetZ();
	const double vectorThreeDesiredZ = firstVectorThree.GetX() * secondVectorThree.GetY() - firstVectorThree.GetY() * secondVectorThree.GetX();

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree VectorThree::ComputeUnclampedInterpolation(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const double specificTime)
{
	const double vectorThreeDesiredX = firstVectorThree.GetX() + (secondVectorThree.GetX() - firstVectorThree.GetX()) * specificTime;
	const double vectorThreeDesiredY = firstVectorThree.GetY() + (secondVectorThree.GetY() - firstVectorThree.GetY()) * specificTime;
	const double vectorThreeDesiredZ = firstVectorThree.GetZ() + (secondVectorThree.GetZ() - firstVectorThree.GetZ()) * specificTime;

	return VectorThree(vectorThreeDesiredX, vectorThreeDesiredY, vectorThreeDesiredZ);
}

const VectorThree VectorThree::ComputeClampedInterpolation(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, double specificTime)
{
	VectorThree vectorThreeDesiredState;
	const double MinimumTime = 0.0;
	const double MaximumTime = 1.0;

	if (specificTime <= MinimumTime)
	{
		specificTime = MinimumTime;

		vectorThreeDesiredState = firstVectorThree;
	}
	else if (specificTime >= MaximumTime)
	{
		specificTime = MaximumTime;

		vectorThreeDesiredState = secondVectorThree;
	}
	else
	{
		vectorThreeDesiredState = ComputeUnclampedInterpolation(firstVectorThree, secondVectorThree, specificTime);
	}

	return vectorThreeDesiredState;
}

const VectorThree VectorThree::ComputeQuadraticBezierCurve(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const VectorThree& thirdVectorThree, const double specificTime)
{
	const VectorThree vectorThreeDesiredABPoint = ComputeClampedInterpolation(firstVectorThree, secondVectorThree, specificTime);
	const VectorThree vectorThreeDesiredBCPoint = ComputeClampedInterpolation(secondVectorThree, thirdVectorThree, specificTime);

	return ComputeClampedInterpolation(vectorThreeDesiredABPoint, vectorThreeDesiredBCPoint, specificTime);
}

const VectorThree VectorThree::ComputeCubicBezierCurve(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const VectorThree& thirdVectorThree, const VectorThree& fourthVectorThree, const double specificTime)
{
	const VectorThree vectorThreeDesiredABCPoint = ComputeQuadraticBezierCurve(firstVectorThree, secondVectorThree, thirdVectorThree, specificTime);
	const VectorThree vectorThreeDesiredBCDPoint = ComputeQuadraticBezierCurve(secondVectorThree, thirdVectorThree, fourthVectorThree, specificTime);

	return ComputeClampedInterpolation(vectorThreeDesiredABCPoint, vectorThreeDesiredBCDPoint, specificTime);
}