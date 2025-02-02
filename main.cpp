#include <iostream>
#include "MyMathLib.h"
#include "BasicMathOps.h"
#include "AdvancedMathOpsTest.h"

int main() {
    // Test square root from original library
    double number = 16.0;
    double result = MyMathLib::squareRoot(number);
    std::cout << "Square root of " << number << " is " << result << std::endl;

    // Test basic operations
    double a = 10.0, b = 5.0;
    std::cout << "Basic Operations:" << std::endl;
    std::cout << a << " + " << b << " = " << BasicMathOps::add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << BasicMathOps::subtract(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << BasicMathOps::multiply(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << BasicMathOps::divide(a, b) << std::endl;

    // Test advanced operations
    int n = 5, r = 2;
    std::cout << "\nAdvanced Operations:" << std::endl;
    std::cout << "Factorial of " << n << " = " << AdvancedMathOpsTest::factorial(n) << std::endl;
    std::cout << "C(" << n << "," << r << ") = " << AdvancedMathOpsTest::combination(n, r) << std::endl;

    return 0;
}