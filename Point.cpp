#include "Point.h"
#include <iostream>
#include <fstream>

Point::Point()
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Point::Point(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void Point::input_data()
{
    std::cout << "Введіть координату x: ";
    std::cin >> x;
    std::cout << "Введіть координату y: ";
    std::cin >> y;
    std::cout << "Введіть координату z: ";
    std::cin >> z;
}

void Point::display_data()
{
    std::cout << "Координати точки: (" << x << ", " << y << ", " << z << ")\n";
}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}

double Point::getZ()
{
    return z;
}

bool Point::saveToFile(const std::string& filename)
{
    std::ofstream outFile(filename);
    if (!outFile.is_open())
    {
        std::cerr << "Помилка: не вдалося відкрити файл " << filename << std::endl;
        return false;
    }

    outFile << x << " " << y << " " << z;
    outFile.close();
    return true;
}

bool Point::loadFromFile(const std::string& filename)
{
    std::ifstream inFile(filename);
    if (!inFile.is_open())
    {
        std::cerr << "Помилка: не вдалося відкрити файл " << filename << std::endl;
        return false;
    }

    inFile >> x >> y >> z;
    inFile.close();
    return true;
}
