#include "stdafx.h"
#include "BigNumbersLib.h"

#include <stdexcept>

/** @brief C++ class that defines the methods found in the
	BigNumbersLib library*/
namespace BigNumber
{
	/**Overloads the + operator*/
	BigNumber operator+ (const BigNumber &a, const BigNumber &b)
	{
		return a + b;
	}

	/**Overloads the - operator*/
	BigNumber operator - (const BigNumber &a, const BigNumber &b)
	{
		return a - b;
	}

	/**Overloads the * operator*/
	BigNumber operator * (const BigNumber &a, const BigNumber &b)
	{
		return a * b;
	}

	/**Overloads the / operator*/
	BigNumber operator / (const BigNumber &a, const BigNumber &b)
	{
		return a / b;
	}

	/**Overloads the % operator*/
	BigNumber operator % (const BigNumber &a, const BigNumber &b)
	{
		return a % b;
	}
}
