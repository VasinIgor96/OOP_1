#include <iostream>
#include "Student.h"
#include <windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student student;

    student.input_data();
    std::cout << "¬веден≥ дан≥ студента:" << std::endl;
    student.display_data();

    return 0;
}
