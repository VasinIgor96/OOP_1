#include <iostream>
#include "Fraction.h"
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Fraction fraction1, fraction2;

    std::cout << "������ ��� ��� ������� �����:\n";
    fraction1.input_data();
    std::cout << "������ ��� ��� ������� �����:\n";
    fraction2.input_data();

    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    Fraction product = fraction1 * fraction2;
    Fraction quotient = fraction1 / fraction2;

    std::cout << "���� �����:\n";
    sum.display_data();
    std::cout << "г����� �����:\n";
    difference.display_data();
    std::cout << "������� �����:\n";
    product.display_data();
    std::cout << "������ �����:\n";
    quotient.display_data();

    return 0;
}
