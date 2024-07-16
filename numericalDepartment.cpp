#include "numericalDepartment.h"
#include <iostream>

NumericalDepartment::NumericalDepartment() {
    professions.push_back(new Profession("Engineer", "Engineers design and build solutions.", "Tech Companies, Engineering Firms", 70000));
    professions.push_back(new Profession("Data Scientist", "Data Scientists analyze data.", "Tech Companies, Financial Institutions", 85000));
    professions.push_back(new Profession("Doctor", "Doctors provide medical care.", "Hospitals, Clinics", 120000));
    professions.push_back(new Profession("Architect", "Architects design buildings.", "Architectural Firms", 65000));
    professions.push_back(new Profession("Statistician", "Statisticians analyze data.", "Government, Research Institutions", 70000));
    professions.push_back(new Profession("Mathematician", "Mathematicians solve mathematical problems.", "Universities, Research Institutes", 80000));
    professions.push_back(new Profession("Chemist", "Chemists study chemicals.", "Pharmaceutical Companies, Laboratories", 75000));
    professions.push_back(new Profession("Physicist", "Physicists study physical phenomena.", "Research Institutions, Universities", 90000));
    professions.push_back(new Profession("Software Developer", "Software developers create software applications.", "Tech Companies, Startups", 95000));
    professions.push_back(new Profession("Civil Engineer", "Civil engineers design and oversee construction projects.", "Construction Companies, Government", 80000));
}

NumericalDepartment::~NumericalDepartment() {
    for (auto profession : professions) {
        delete profession;
    }
}

void NumericalDepartment::displayProfessions() const {
    for (size_t i = 0; i < professions.size(); ++i) {
        std::cout << i + 1 << ". " << professions[i]->name << "\n";
    }
}

void NumericalDepartment::displayProfessionInfo(int index) const {
    if (index >= 0 && index < professions.size()) {
        professions[index]->displayInfo();
    }
    else {
        std::cout << "Invalid selection. You must enter a number between 1 and 10.\n";
    }
}

std::string NumericalDepartment::getProfessionName(int index) const {
    if (index >= 0 && index < professions.size()) {
        return professions[index]->name;
    }
    else {
        return "Invalid selection";
    }
}
