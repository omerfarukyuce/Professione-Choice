#include "Profession.h"
#include <iostream>

Profession::Profession(const std::string& name, const std::string& description, const std::string& companies, double averageSalary)
    : name(name), description(description), companies(companies), averageSalary(averageSalary) {}

void Profession::displayInfo() const {
    std::cout << "Profession: " << name << "\nDescription: " << description
        << "\nCompanies: " << companies << "\nAverage Salary: " << averageSalary << "\n";
}
