/**
	Course: SDEV-340-45
	Assignment Week: 3
	Assignment Purpose: Employee Evaluation Program Demonstrate a Base Class, Inheritance, Virtual Functions, and an STL object
	GitHub Download:https://github.com/quisitor/csmith_week3.git
	\file Main.cpp Employee Evaluation Program Demonstration
	\author: Craig Smith
	\version: 1.0 4/9/22

*/

#include "Employee.h"
#include "Manager.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>

int main() {

	// Test the Base Class Constructor and PrintValues() Function
	std::cout << std::endl << std::endl << "_________________Employee_________________\n";
	std::vector<std::string> notes {"Craig is a good worker", "Craig has worked here for 26 years"};
	Employee employee{ "Craig", "Smith", Employee::Efficiency::One, notes, 99053.57 };
	employee.PrintValues();

	// Test the Derived Class Constructor and PrintValues() Function
	std::cout << std::endl << std::endl << "_________________Manager_________________\n";
	std::vector<std::string> managerNotes{ "Bob is a good manager", "Bob has consistently delivered" };
	Manager manager{ "Bob", "The Manager Jones", Employee::Efficiency::Five, managerNotes, 107472.78, "District Manager", "Local Widgets"};
	manager.PrintValues();
	std::cout << std::endl << std::endl;

	// Test of Inheritance
	std::vector<std::string> empToMgrPtrNotes{ "UniqueFName has been a consitent manager", "UniqueFName has met his yearly targets" };
	std::unique_ptr<Employee>empToMgrPtr = std::make_unique<Manager>("UniqueFName", "UniqueLName", Employee::Efficiency::Three, 
		empToMgrPtrNotes, 123432.21, "Statewide Manager", "Sales");
	
	// Test virtual function overrides
	std::cout << std::endl << std::endl << "_________________Virtual Function Override Test_________________\n";
	int efficieny = empToMgrPtr->getEfficiencyRating();
	double salary = empToMgrPtr->getSalary();
	std::cout << std::endl << std::endl << "_________________Employee to Manager Pointer_________________\n";
	empToMgrPtr->PrintValues();
	std::cout << std::endl << std::endl;

	return 0;
}
