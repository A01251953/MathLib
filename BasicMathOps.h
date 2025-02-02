#ifndef MATHLIB_BASICMATHOPS_H
#define MATHLIB_BASICMATHOPS_H

class BasicMathOps {
public:
    static double add(double a, double b) {
        return a + b;
    }
    
    static double subtract(double a, double b) {
        return a - b;
    }
    
    static double multiply(double a, double b) {
        return a * b;
    }
    
    static double divide(double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("Division by zero is not allowed");
        }
        return a / b;
    }
};

#endif //MATHLIB_BASICMATHOPS_H