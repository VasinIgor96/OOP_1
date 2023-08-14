#include <iostream>

class Student
{
private:
	int id;
	std::string login;
	std::string password;
	std::string name;
	std::string surname;
	std::string email;
	std::string phoneNumber;

public:
	Student();
	Student(int id, std::string login, std::string password, std::string name, std::string surname, std::string email, std::string phoneNumber);
	~Student();

	int getId();
	std::string getLogin();
	std::string getPassword();
	std::string getName();
	std::string getSurname();
	std::string getEmail();
	std::string getPhoneNumber();

	void setId(int Id);
	void setLogin(std::string login);
	void setPassword(std::string password);
	void setName(std::string name);
	void setSurname(std::string surname);
	void setEmail(std::string email);
	void setPhoneNumbe(std::string phoneNumber);
};
