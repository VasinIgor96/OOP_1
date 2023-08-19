#include <iostream>

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int numerator, int denominator);

    void input_data();
    void display_data();

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
};