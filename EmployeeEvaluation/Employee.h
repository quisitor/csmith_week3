#pragma once
#include <string>
#include <vector>

class Employee
{
private:
	std::string _firstName;
	std::string _lastName;
	int _efficiencyRating;
	std::vector<std::string> _notes;
	double _salary;

public:
	Employee(std::string firstName, std::string lastName, int efficiencyRating, std::vector<std::string> notes, double salary);
	Employee(std::string firstName, std::string lastName, int efficiencyRating, double salary);
	~Employee() {};


};

