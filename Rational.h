/*
 * Rational.h
 *
 *  Created on: Mar 24, 2019
 *      Author: Hassan
 */

#ifndef RATIONAL_H_
#define RATIONAL_H_
#include <string>
using namespace std;

class Rational {
private:
int n;
int d;

public:
Rational();
Rational(int n,int d); 
Rational(const Rational &copy);
// Binary Operators
// Assignment Operator
Rational operator = (const Rational &x);
Rational simply(const Rational &x) const;
// Arithmetic Operators
Rational operator+(const Rational &x) const;
Rational operator-(const Rational &x) const;
Rational operator*(const Rational &x) const;
Rational operator/(const Rational &x) const;
// Compound Arithmetic Operators
Rational operator += (const Rational &x);
Rational operator -= (const Rational &x);
Rational operator *= (const Rational &x);
Rational operator /= (const Rational &x);
// Logical Operators
bool operator == (const Rational & other) const;
bool operator < (const Rational & other) const;
bool operator > (const Rational & other) const;
bool operator <= (const Rational & other) const;
bool operator >= (const Rational & other) const;
operator std::string() const;
~Rational(); 
friend ostream& operator<<(ostream& output, const Rational &obj); 
friend istream& operator>>(istream& input, Rational&obj);
Rational operator+(const int &x) const;
Rational operator-(const int &x) const;
Rational operator*(const int &x) const;
Rational operator/(const int &x) const;
};

#endif /* RATIONAL_H_ */
