/**
	Course: SDEV-340-45
	Assignment Week: 3
	Assignment Purpose: Employee Evaluation Program Demonstrate a Base Class, Inheritance, Virtual Functions, and an STL object
	GitHub Download:
	\file Employee.cpp Base Employee Class Implementation
	\author: Craig Smith
	\version: 1.0 4/9/22

*/

#include "Employee.h"
#include <iostream>
#include <sstream>

/**
 * Default Employee Constructor.
 * 
 */
Employee::Employee()
{
	//default
}

/**
 * Full Employee Constructor, Create an Employee Object.
 * 
 * \param firstName
 * \param lastName
 * \param efficiencyRating
 * \param notes
 * \param salary
 */
Employee::Employee(std::string firstName, std::string lastName, Employee::Efficiency efficiencyRating, std::vector<std::string> notes, double salary)
{
	_firstName = firstName;
	_lastName = lastName;
	_efficiencyRating = (int)efficiencyRating;
	_notes = notes;
	_salary = salary;
}

/**
 * Set or Modify the Employee's First Name.
 * 
 * \param firstName
 */
void Employee::setFirstName(const std::string& firstName)
{
	_firstName = firstName;
}

/**
 * Set or Modify the Employee's Last Name.
 * 
 * \param lastName
 */
void Employee::setLastName(const std::string& lastName)
{
	_lastName = lastName;
}

/**
 * Set or Modify the Employee's Efficiency Rating Utilizing the Employee::Efficiency Enumeration Class.
 * 
 * \param efficiencyRating
 */
void Employee::setEfficiencyRating(Efficiency efficiencyRating)
{
	_efficiencyRating = (int)efficiencyRating;
}

/**
 * Set or Modify the Employee's Salary.
 * 
 * \param salary
 */
void Employee::setSalary(double salary)
{
	_salary = salary;
}

/**
 * Add a Note to the Employee's Evaluation.
 * 
 * \param note
 */
void Employee::addNote(const std::string& note)
{
	_notes.push_back(note);
}

/**
 * Obtain a copy of the Employee's Notes Vector.
 * 
 * \return 
 */
std::vector<std::string> Employee::getNotes()
{
	return _notes;
}

/**
 * Get a copy of the Employee's First Name.
 * 
 * \return 
 */
std::string Employee::getFirstname()
{
	return _firstName;
}

/**
 * Get a copy of the Employee's Last Name.
 * 
 * \return 
 */
std::string Employee::getLastName()
{
	return _lastName;
}

/**
 * Get the Employee's Efficiency Rating.
 * 
 * \return 
 */
int Employee::getEfficiencyRating()
{
	return _efficiencyRating;
}

/**
 * Get the Employee's Salary.
 * 
 * \return 
 */
double Employee::getSalary()
{
	return _salary;
}

/**
 * Send a String representation of the Employee Object to the Console.
 * 
 */
void Employee::PrintValues()
{
	std::string employeeObjRepresentation;
	employeeObjRepresentation.append("First Name: ");
	employeeObjRepresentation.append(_firstName);
	employeeObjRepresentation.append("\nLast Name: ");
	employeeObjRepresentation.append(_lastName);
	employeeObjRepresentation.append("\nEfficiency Rating: ");
	employeeObjRepresentation.append(std::to_string(_efficiencyRating));
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
