#include <iostream>
#include "Point.h"
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Point point;
    Point loadedPoint;

    int choice;
    std::string filename = "point_data.txt";

    do {
        std::cout << "Оберіть опцію:\n";
        std::cout << "1. Ввести дані точки\n";
        std::cout << "2. Зберегти дані у файл\n";
        std::cout << "3. Завантажити дані з файлу\n";
        std::cout << "4. Вивести дані точки\n";
        std::cout << "0. Вийти\n";
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            point.input_data();
            break;
        case 2:
            if (point.saveToFile(filename))
                std::cout << "Дані були збережені у файл " << filename << std::endl;
            break;
        case 3:
            if (loadedPoint.loadFromFile(filename))
                std::cout << "Дані були завантажені з файлу " << filename << std::endl;
            break;
        case 4:
            std::cout << "Введені дані точки:\n";
            point.display_data();
            std::cout << "Завантажені дані точки:\n";
            loadedPoint.display_data();
            break;
        case 0:
            std::cout << "До побачення!\n";
            break;
        default:
            std::cout << "Невідома опція\n";
        }

    } while (choice != 0);

    return 0;
}
