// BigNumberLib.h
/** @brief Header class that acts as a library for
	BigNumber*/
namespace BigNumber
{
	class BigNumber
	{
	public:
		/** Returns a + b
			@param b BigNumber value
			@return this + b
		*/
		static BigNumber operator + (const BigNumber &b);

		/** Returns a - b
			@param b BigNumber value
			@return this - b
		*/
		static BigNumber operator - (const BigNumber &b);

		/** Returns a * b
			@param b BigNumber value
			@return this * b
		*/
		static BigNumber operator * (const BigNumber &b);

		/** Returns a / b
			@param b BigNumber value
			@return this / b
		*/
		static BigNumber operator/(const BigNumber &a, const BigNumber &b);

		/** Returns a % b
			@param b BigNumber value
			@return this % b
		*/
		static BigNumber operator % (const BigNumber &a, const BigNumber &b);
	};
}
