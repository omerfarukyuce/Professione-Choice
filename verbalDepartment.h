#ifndef VERBALDEPARTMENT_H
#define VERBALDEPARTMENT_H

#include "Profession.h"
#include <vector>

class VerbalDepartment {
private:
    std::vector<Profession*> professions;
public:
    VerbalDepartment();
    ~VerbalDepartment();
    void displayProfessions() const;
    void displayProfessionInfo(int index) const;
    std::string getProfessionName(int index) const;
};

#endif
