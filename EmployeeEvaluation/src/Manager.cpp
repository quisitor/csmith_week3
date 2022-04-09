/**
	Course: SDEV-340-45
	Assignment Week: 3
	Assignment Purpose: Employee Evaluation Program Demonstrate a Base Class, Inheritance, Virtual Functions, and an STL object
	GitHub Download:https://github.com/quisitor/csmith_week3.git
	\file Manager.cpp Derived Manager Class Implementation
	\author: Craig Smith
	\version: 1.0 4/9/22

*/

#include "Manager.h"
#include <sstream>
#include <iostream>

/**
 * Defeault Manager Constructor.
 * 
 */
Manager::Manager()
{
	// default
}

/**
 * Full Manager Object Constructor.
 * 
 * \param firstName
 * \param lastName
 * \param efficiencyRating
 * \param notes
 * \param salary
 * \param title
 * \param department
 */
Manager::Manager(std::string firstName, std::string lastName, Employee::Efficiency efficiencyRating, std::vector<std::string> notes, double salary, std::string title, std::string department)
	: Employee{ firstName, lastName, efficiencyRating, notes, salary }
{
    _managerDepartment = department;
    _managerTitle = title;
}

/**
 * Obtain the Manager's Efficiency Rating.
 * 
 * \return 
 */
int Manager::getEfficiencyRating()
{
	std::cout << std::endl << "______Manager::getEfficiencyRating() Called_______" << std::endl;
	return _efficiencyRating;
}

/**
 * Obtain the Manager's Salary.
 * 
 * \return 
 */
double Manager::getSalary()
{
	std::cout << std::endl << "______Manager::getSalary() Called_______" << std::endl;
	return _salary;
}

/**
 * Send a String representation of the Employee Object to the Console.
 * 
 */
void Manager::PrintValues()
{
	std::string employeeObjRepresentation;
	employeeObjRepresentation.append("First Name: ");
	employeeObjRepresentation.append(_firstName);
	employeeObjRepresentation.append("\nLast Name: ");
	employeeObjRepresentation.append(_lastName);
	employeeObjRepresentation.append("\nEfficiency Rating: ");
	employeeObjRepresentation.append(std::to_string(_efficiencyRating));
	employeeObjRepresentation.append("\nTitle: ");
	employeeObjRepresentation.append(_managerTitle);
	employeeObjRepresentation.append("\nDepartment: ");
	employeeObjRepresentation.append(_managerDepartment);
	employeeObjRepresentation.append("\nSalary: $");

	// Convert _salary to a string with 2 decimal places
	// Reference example iq.opengenus.org/convert-double-to-string-in-cpp/
	std::ostringstream osstring;
	osstring.precision(2);
	osstring << std::fixed << _salary;
	employeeObjRepresentation.append(osstring.str());

	// Collect all the notes in the vector
	int noteNumber = 0;
	for (std::string notes : _notes) {
		employeeObjRepresentation.append("\n");
		employeeObjRepresentation.append("Note# ");
		employeeObjRepresentation.append(std::to_string(++noteNumber));
		employeeObjRepresentation.append(" : ");
		employeeObjRepresentation.append(notes);
	}

	std::cout << employeeObjRepresentation;
}

/**
 * Set or Modify the Manager's Title.
 * 
 * \param title
 */
void Manager::setTitle(std::string title)
{
	_managerTitle = title;
}

/**
 * Set or Modify the Manager's Department.
 * 
 * \param department
 */
void Manager::setDepartment(std::string department)
{
	_managerDepartment = department;
}
