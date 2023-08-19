#include <iostream>
#include "Fraction.h"
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Fraction fraction1, fraction2;

    std::cout << "Введіть дані для першого дробу:\n";
    fraction1.input_data();
    std::cout << "Введіть дані для другого дробу:\n";
    fraction2.input_data();

    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    Fraction product = fraction1 * fraction2;
    Fraction quotient = fraction1 / fraction2;

    std::cout << "Сума дробів:\n";
    sum.display_data();
    std::cout << "Різниця дробів:\n";
    difference.display_data();
    std::cout << "Добуток дробів:\n";
    product.display_data();
    std::cout << "Частка дробів:\n";
    quotient.display_data();

    return 0;
}
