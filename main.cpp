#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Student* student_1 = new Student(1, "login", "password", "name", "surname", "email", "phoneNumber");
	cout << student_1->getId() << endl;
	cout << student_1->getLogin() << endl;
	cout << student_1->getPassword() << endl;
	cout << student_1->getName() << endl;
	cout << student_1->getSurname() << endl;
	cout << student_1->getEmail() << endl;
	cout << student_1->getPhoneNumber() << endl;
	delete student_1;
	return 0;
}