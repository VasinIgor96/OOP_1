#include "Student.h"
#include <iostream>
#include <windows.h>

Student::Student()
{

}

void Student::input_data()
{
    std::cout << "Введіть ПІБ студента: ";
    std::getline(std::cin, full_name);
    std::cout << "Введіть дату народження: ";
    std::getline(std::cin, birth_date);
    std::cout << "Введіть контактний телефон: ";
    std::getline(std::cin, contact_phone);
    std::cout << "Введіть місто студента: ";
    std::getline(std::cin, city);
    std::cout << "Введіть країну студента: ";
    std::getline(std::cin, country);
    std::cout << "Введіть назву навчального закладу: ";
    std::getline(std::cin, school_name);
    std::cout << "Введіть місто навчального закладу: ";
    std::getline(std::cin, school_city);
    std::cout << "Введіть країну навчального закладу: ";
    std::getline(std::cin, school_country);
    std::cout << "Введіть номер групи: ";
    std::getline(std::cin, group_number);
}

void Student::display_data()
{
    std::cout << "ПІБ студента: " << full_name << std::endl;
    std::cout << "Дата народження: " << birth_date << std::endl;
    std::cout << "Контактний телефон: " << contact_phone << std::endl;
    std::cout << "Місто: " << city << std::endl;
    std::cout << "Країна: " << country << std::endl;
    std::cout << "Назва навчального закладу: " << school_name << std::endl;
    std::cout << "Місто навчального закладу: " << school_city << std::endl;
    std::cout << "Країна навчального закладу: " << school_country << std::endl;
    std::cout << "Номер групи: " << group_number << std::endl;
}

std::string Student::getFullName()
{
    return full_name;
}

std::string Student::getBirthDate()
{
    return birth_date;
}

std::string Student::getContactPhone()
{
    return contact_phone;
}

std::string Student::getCity()
{
    return city;
}

std::string Student::getCountry()
{
    return country;
}

std::string Student::getSchoolName()
{
    return school_name;
}

std::string Student::getSchoolCity()
{
    return school_city;
}

std::string Student::getSchoolCountry()
{
    return school_country;
}

std::string Student::getGroupNumber()
{
    return group_number;
}
