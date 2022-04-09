/**
    Course: SDEV-340-45
    Assignment Week: 3
    Assignment Purpose: Employee Evaluation Program Demonstrate a Base Class, Inheritance, Virtual Functions, and an STL object
    GitHub Download: 
    \file Manager.h Derived Manager Class Declaration - Derived from the Employee Base Class
    \author: Craig Smith
    \version: 1.0 4/9/22

*/

#pragma once

#include "Employee.h"
#include <string>

class Manager :
    public Employee
{
private:
    std::string _managerTitle;
    std::string _managerDepartment;

public:
    Manager();
    Manager(std::string firstName, std::string lastName, Employee::Efficiency efficiencyRating, std::vector<std::string> notes, double salary,
        std::string title, std::string department);
    int getEfficiencyRating() override;
    double getSalary() override; 
    void PrintValues() override;
    void setTitle(std::string title);
    void setDepartment(std::string department);

};

