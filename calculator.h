#ifndef CALCULATOR_H
#define CALCULATOR_H

// Basic arithmetic operations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

// Advanced operations
unsigned long long factorial(unsigned int n);
int gcd(int a, int b);
int lcm(int a, int b);

// Random number generation
int randomInRange(int min, int max);

#endif // CALCULATOR_H