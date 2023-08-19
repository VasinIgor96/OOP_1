#include "Student.h"
#include <iostream>
#include <windows.h>

Student::Student()
{

}

void Student::input_data()
{
    std::cout << "������ ϲ� ��������: ";
    std::getline(std::cin, full_name);
    std::cout << "������ ���� ����������: ";
    std::getline(std::cin, birth_date);
    std::cout << "������ ���������� �������: ";
    std::getline(std::cin, contact_phone);
    std::cout << "������ ���� ��������: ";
    std::getline(std::cin, city);
    std::cout << "������ ����� ��������: ";
    std::getline(std::cin, country);
    std::cout << "������ ����� ����������� �������: ";
    std::getline(std::cin, school_name);
    std::cout << "������ ���� ����������� �������: ";
    std::getline(std::cin, school_city);
    std::cout << "������ ����� ����������� �������: ";
    std::getline(std::cin, school_country);
    std::cout << "������ ����� �����: ";
    std::getline(std::cin, group_number);
}

void Student::display_data()
{
    std::cout << "ϲ� ��������: " << full_name << std::endl;
    std::cout << "���� ����������: " << birth_date << std::endl;
    std::cout << "���������� �������: " << contact_phone << std::endl;
    std::cout << "̳���: " << city << std::endl;
    std::cout << "�����: " << country << std::endl;
    std::cout << "����� ����������� �������: " << school_name << std::endl;
    std::cout << "̳��� ����������� �������: " << school_city << std::endl;
    std::cout << "����� ����������� �������: " << school_country << std::endl;
    std::cout << "����� �����: " << group_number << std::endl;
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
