#include "equalWeightDepartment.h"
#include <iostream>

EqualWeightDepartment::EqualWeightDepartment() {
    professions.push_back(new Profession("Economist", "Economists analyze economic trends.", "Financial Institutions, Government", 60000));
    professions.push_back(new Profession("Lawyer", "Lawyers provide legal advice.", "Law Firms, Corporations", 75000));
    professions.push_back(new Profession("Business Manager", "Business Managers oversee business operations.", "Corporations, Startups", 80000));
    professions.push_back(new Profession("Accountant", "Accountants manage financial records.", "Accounting Firms, Corporations", 55000));
    professions.push_back(new Profession("Marketing Specialist", "Marketing Specialists create marketing strategies.", "Marketing Agencies, Corporations", 65000));
    professions.push_back(new Profession("Financial Analyst", "Financial Analysts assess financial data.", "Financial Institutions, Corporations", 70000));
    professions.push_back(new Profession("Human Resources Manager", "HR Managers oversee employee relations.", "Corporations, Government", 65000));
    professions.push_back(new Profession("Real Estate Agent", "Real Estate Agents help clients buy and sell properties.", "Real Estate Firms, Freelance", 60000));
    professions.push_back(new Profession("Banker", "Bankers manage financial transactions.", "Banks, Financial Institutions", 70000));
    professions.push_back(new Profession("Insurance Agent", "Insurance Agents sell insurance policies.", "Insurance Companies, Freelance", 50000));
}

EqualWeightDepartment::~EqualWeightDepartment() {
    for (auto profession : professions) {
        delete profession;
    }
}

void EqualWeightDepartment::displayProfessions() const {
    for (size_t i = 0; i < professions.size(); ++i) {
        std::cout << i + 1 << ". " << professions[i]->name << "\n";
    }
}

void EqualWeightDepartment::displayProfessionInfo(int index) const {
    if (index >= 0 && index < professions.size()) {
        professions[index]->displayInfo();
    }
    else {
        std::cout << "Invalid selection. You must enter a number between 1 and 10.\n";
    }
}

std::string EqualWeightDepartment::getProfessionName(int index) const {
    if (index >= 0 && index < professions.size()) {
        return professions[index]->name;
    }
    else {
        return "Invalid selection";
    }
}
