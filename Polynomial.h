#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_
#include <cstring>
#include<iostream>
using namespace std;

class Polynomial {
int arr[100];
int pow;
public:
//include all the necessary checks before performing the operations in the functions
Polynomial(); // a default constructor
Polynomial(int x); // a parameterized constructor, received the highest degree of polynomial
Polynomial(const Polynomial & obj); // a copy constructor

// Binary Operators
// Assignment Operator
Polynomial operator=(const Polynomial& rhs); //assigns (copies) the rhs Polynomial to "this" Polynomial
// Arithmetic Operators
Polynomial operator+(const Polynomial &obj); // adds two Polynomials and returns the result
Polynomial operator-(const Polynomial & obj); // subtracts two Polynomials and returns the result
// Compound Assignment Operators
void operator+=(const Polynomial& obj); // adds two Polynomials
void operator-=(const Polynomial& obj); // subtracts two Polynomials
// Logical Operator
bool operator==(const Polynomial &obj ); // compares and returns true if equal

// Conversion Operator
operator std::string() const; // returns the value of the Polynomial as a string like “4x^3 + 3x + 2”
~Polynomial(); // destructor
friend ostream& operator<<(ostream& output, const Polynomial&); // outputs the Polynomial
friend istream& operator>>(istream& input, Polynomial&); // inputs the Polynomial
};



#endif /* POLYNOMIAL_H_ */
