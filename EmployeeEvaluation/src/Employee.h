/**
	Course: SDEV-340-45
	Assignment Week: 3
	Assignment Purpose: Employee Evaluation Program Demonstrate a Base Class, Inheritance, Virtual Functions, and an STL object
	GitHub Download: https://github.com/quisitor/csmith_week3.git
	\file Employee.h Base Employee Class Declaration
	\author: Craig Smith
	\version: 1.0 4/9/22

*/

#pragma once

#include <string>
#include <vector>

class Employee
{
protected:
	std::string _firstName;
	std::string _lastName;
	int _efficiencyRating;
	std::vector<std::string> _notes;
	double _salary;

public:

	enum class Efficiency : unsigned char {One = 1, Two, Three, Four, Five};
	Employee();
	Employee(std::string firstName, std::string lastName, Employee::Efficiency efficiencyRating, std::vector<std::string> notes, double salary);
	virtual ~Employee() {};
	virtual void setFirstName(const std::string& firstName);
	virtual void setLastName(const std::string& lastName);
	virtual void setEfficiencyRating(Efficiency efficiencyRating);
	virtual void setSalary(double salary);
	virtual void addNote(const std::string& note);
	virtual std::vector<std::string> getNotes();
	virtual std::string getFirstname();
	virtual std::string getLastName();
	virtual int getEfficiencyRating();
	virtual double getSalary();
	virtual void PrintValues();

};

