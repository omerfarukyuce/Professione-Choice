#ifndef PROFESSION_H
#define PROFESSION_H

#include <string>

class Profession {
public:
    std::string name;
    std::string description;
    std::string companies;
    double averageSalary;

    Profession(const std::string& name, const std::string& description, const std::string& companies, double averageSalary);
    virtual void displayInfo() const;
    virtual ~Profession() = default;
};

#endif
