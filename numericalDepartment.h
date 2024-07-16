#ifndef NUMERICALDEPARTMENT_H
#define NUMERICALDEPARTMENT_H

#include "Profession.h"
#include <vector>

class NumericalDepartment {
private:
    std::vector<Profession*> professions;  
public:
    NumericalDepartment();
    ~NumericalDepartment();  
    void displayProfessions() const;
    void displayProfessionInfo(int index) const;
    std::string getProfessionName(int index) const;
};

#endif
