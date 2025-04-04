#include "calculator.h"
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <algorithm>

// Basic arithmetic
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { 
    if (b == 0) throw std::invalid_argument("Division by zero");
    return a / b; 
}

// Advanced operations
unsigned long long factorial(unsigned int n) {
    if (n > 20) throw std::invalid_argument("Factorial too large for 64-bit unsigned");
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return abs(a * b) / gcd(a, b);
}

// Random number generation
int randomInRange(int min, int max) {
    if (min > max) std::swap(min, max);
    static bool seeded = false;
    if (!seeded) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        seeded = true;
    }
    return min + (std::rand() % (max - min + 1));
}