#include "Fraction.h"
#include <iostream>

Fraction::Fraction()
{
    numerator = 0;
    denominator = 1; // Default denominator should not be zero
}

Fraction::Fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    if (denominator != 0)
        this->denominator = denominator;
    else
        this->denominator = 1; // Avoid division by zero
}

void Fraction::input_data()
{
    std::cout << "¬вед≥ть чисельник: ";
    std::cin >> numerator;
    std::cout << "¬вед≥ть знаменник: ";
    std::cin >> denominator;
}

void Fraction::display_data()
{
    std::cout << "ƒр≥б: " << numerator << "/" << denominator << std::endl;
}

Fraction Fraction::operator+(const Fraction& other) const
{
    int newNumerator = numerator * other.denominator + other.numerator * denominator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator-(const Fraction& other) const
{
    int newNumerator = numerator * other.denominator - other.numerator * denominator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator*(const Fraction& other) const
{
    int newNumerator = numerator * other.numerator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator/(const Fraction& other) const
{
    int newNumerator = numerator * other.denominator;
    int newDenominator = denominator * other.numerator;
    return Fraction(newNumerator, newDenominator);
}
