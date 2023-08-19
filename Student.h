#include <iostream>
#include <string>
#include <windows.h>
class Student
{
private:
    std::string full_name;
    std::string birth_date;
    std::string contact_phone;
    std::string city;
    std::string country;
    std::string school_name;
    std::string school_city;
    std::string school_country;
    std::string group_number;

public:
    Student();
    void input_data();
    void display_data();

    std::string getFullName();
    std::string getBirthDate();
    std::string getContactPhone();
    std::string getCity();
    std::string getCountry();
    std::string getSchoolName();
    std::string getSchoolCity();
    std::string getSchoolCountry();
    std::string getGroupNumber();
};
