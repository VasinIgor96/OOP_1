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
        std::cout << "������ �����:\n";
        std::cout << "1. ������ ��� �����\n";
        std::cout << "2. �������� ��� � ����\n";
        std::cout << "3. ����������� ��� � �����\n";
        std::cout << "4. ������� ��� �����\n";
        std::cout << "0. �����\n";
        std::cout << "��� ����: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            point.input_data();
            break;
        case 2:
            if (point.saveToFile(filename))
                std::cout << "��� ���� �������� � ���� " << filename << std::endl;
            break;
        case 3:
            if (loadedPoint.loadFromFile(filename))
                std::cout << "��� ���� ���������� � ����� " << filename << std::endl;
            break;
        case 4:
            std::cout << "������ ��� �����:\n";
            point.display_data();
            std::cout << "���������� ��� �����:\n";
            loadedPoint.display_data();
            break;
        case 0:
            std::cout << "�� ���������!\n";
            break;
        default:
            std::cout << "������� �����\n";
        }

    } while (choice != 0);

    return 0;
}
