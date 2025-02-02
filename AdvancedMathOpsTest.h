#ifndef MATHLIB_ADVANCEDMATHOPS_H
#define MATHLIB_ADVANCEDMATHOPS_H

class AdvancedMathOpsTest {
public:
    static unsigned long long factorial(int n) {
        if (n < 0) {
            throw std::invalid_argument("Factorial is not defined for negative numbers");
        }
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
    
    static unsigned long long combination(int n, int r) {
        if (n < r) {
            throw std::invalid_argument("n must be greater than or equal to r");
        }
        if (r < 0 || n < 0) {
            throw std::invalid_argument("Both n and r must be non-negative");
        }
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
};

#endif //MATHLIB_ADVANCEDMATHOPS_H