#include <iostream>
#include <fstream>
#include "numericalDepartment.h"
#include "verbalDepartment.h"
#include "equalWeightDepartment.h"

void saveSelection(const std::string& selection) {
    std::ofstream outFile("selections.txt", std::ios_base::app);
    if (outFile.is_open()) {
        outFile << selection << std::endl;
        outFile.close();
    }
    else {
        std::cerr << "Unable to open file.\n";
    }
}

int main() {
    int choice;
    std::cout << "Welcome to the Career Guidance Program!\n\n";
    std::cout << "Select Department(1-3):\n1. Numerical\n2. Verbal\n3. Equal Weight\nYour choice:";
    std::cin >> choice;

    if (choice == 1) {
        NumericalDepartment numDept;
        numDept.displayProfessions();
        std::cout << "Select a profession(1-10):\n";
        int profChoice;
        std::cin >> profChoice;
        std::string professionName = numDept.getProfessionName(profChoice - 1);
        saveSelection("Numerical Department - " + professionName);
        numDept.displayProfessionInfo(profChoice - 1);
    }
    else if (choice == 2) {
        VerbalDepartment verbDept;
        verbDept.displayProfessions();
        std::cout << "Select a profession(1-10):\n";
        int profChoice;
        std::cin >> profChoice;
        std::string professionName = verbDept.getProfessionName(profChoice - 1);
        saveSelection("Verbal Department - " + professionName);
        verbDept.displayProfessionInfo(profChoice - 1);
    }
    else if (choice == 3) {
        EqualWeightDepartment eqDept;
        eqDept.displayProfessions();
        std::cout << "Select a profession(1-10):\n";
        int profChoice;
        std::cin >> profChoice;
        std::string professionName = eqDept.getProfessionName(profChoice - 1);
        saveSelection("Equal Weight Department - " + professionName);
        eqDept.displayProfessionInfo(profChoice - 1);
    }
    else {
        std::cout << "Invalid selection. You must enter a number between 1 and 3.\n";
    }
    std::cout << "\nThank you for using the Career Guidance Program. Goodbye!\n";
    return 0;
}
