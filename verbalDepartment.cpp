#include "verbalDepartment.h"
#include <iostream>

VerbalDepartment::VerbalDepartment() {
    professions.push_back(new Profession("Teacher", "Teachers educate students.", "Schools, Educational Institutions", 40000));
    professions.push_back(new Profession("Journalist", "Journalists report news.", "Media Companies, Newspapers", 50000));
    professions.push_back(new Profession("Historian", "Historians study and interpret past events.", "Universities, Museums", 45000));
    professions.push_back(new Profession("Linguist", "Linguists study languages.", "Universities, Research Institutes", 48000));
    professions.push_back(new Profession("Philosopher", "Philosophers study fundamental questions.", "Universities, Research Institutes", 50000));
    professions.push_back(new Profession("Sociologist", "Sociologists study social behaviors.", "Universities, Research Institutes", 55000));
    professions.push_back(new Profession("Psychologist", "Psychologists study mental processes.", "Hospitals, Clinics", 60000));
    professions.push_back(new Profession("Writer", "Writers create written content.", "Publishing Houses, Freelance", 45000));
    professions.push_back(new Profession("Actor", "Actors perform in various media.", "Theater Companies, Film Industry", 55000));
    professions.push_back(new Profession("Translator", "Translators convert written material from one language to another.", "Translation Agencies, Freelance", 40000));
}

VerbalDepartment::~VerbalDepartment() {
    for (auto profession : professions) {
        delete profession;
    }
}

void VerbalDepartment::displayProfessions() const {
    for (size_t i = 0; i < professions.size(); ++i) {
        std::cout << i + 1 << ". " << professions[i]->name << "\n";
    }
}

void VerbalDepartment::displayProfessionInfo(int index) const {
    if (index >= 0 && index < professions.size()) {
        professions[index]->displayInfo();
    }
    else {
        std::cout << "Invalid selection. You must enter a number between 1 and 10.\n";
    }
}

std::string VerbalDepartment::getProfessionName(int index) const {
    if (index >= 0 && index < professions.size()) {
        return professions[index]->name;
    }
    else {
        return "Invalid selection";
    }
}
