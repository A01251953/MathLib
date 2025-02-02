#ifndef MATHLIB_MYMATHLIB_H
#define MATHLIB_MYMATHLIB_H

#include <stdexcept>
#include <cmath>

class MyMathLib {
public:
	static double squareRoot(double x) {
		if (x < 0) {
			throw std::invalid_argument("Cannot calculate square root of negative number");
		}
		return std::sqrt(x);
	}
};

#endif //MATHLIB_MYMATHLIB_H