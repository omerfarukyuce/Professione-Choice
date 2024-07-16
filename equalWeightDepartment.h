#ifndef EQUALWEIGHTDEPARTMENT_H
#define EQUALWEIGHTDEPARTMENT_H

#include "Profession.h"
#include <vector>

class EqualWeightDepartment {
private:
    std::vector<Profession*> professions;
public:
    EqualWeightDepartment();
    ~EqualWeightDepartment();
    void displayProfessions() const;
    void displayProfessionInfo(int index) const;
    std::string getProfessionName(int index) const;
};

#endif