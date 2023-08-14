#include "Student.h"
Student::Student()
{
	id = 0;
	login = "";
	password = "";
	name = "";
	surname = "";
	email = "";
	phoneNumber = "";
}

Student::Student(int id, std::string login, std::string password, std::string name, std::string surname, std::string email, std::string phoneNumber)
{
	this->id = id;
	this->login = login;
	this->password = password;
	this->name = name;
	this->surname = surname;
	this->email = email;
	this->phoneNumber = phoneNumber;
}
Student::~Student()
{
	this->login.clear();
	this->password.clear();
	this->name.clear();
	this->surname.clear();
	this->email.clear();
	this->phoneNumber.clear();
}

int Student::getId()
{
	return id;
}
std::string Student::getLogin()
{
	return login;
}

std::string Student::getPassword()
{
	return password;
}
std::string Student::getName()
{
	return name;
}
std::string Student::getSurname()
{
	return surname;
}
std::string Student::getEmail()
{
	return email;
}
std::string Student::getPhoneNumber()
{
	return phoneNumber;
}
void Student::setId(int Id)
{
	this->id = id;
}

void Student::setLogin(std::string login)
{
	this->login = login;
}
void Student::setPassword(std::string password)
{
	this->password = password;
}
void Student::setName(std::string name)
{
	this->name = name;
}
void Student::setSurname(std::string surname)
{
	this->surname = surname;
}
void Student::setEmail(std::string email)
{
	this->email = email;
}
void Student::setPhoneNumbe(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}