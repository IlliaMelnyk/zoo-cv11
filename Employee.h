//
// Created by xmelnyk on 07.12.2023.
//

#ifndef ZOO_CV_11_EMPLOYEE_H
#define ZOO_CV_11_EMPLOYEE_H
#include <iostream>
#include "WorkState.h"
#include "vector"
class Employee {
std::string m_name;
std::string m_birthDate;
WorkState* m_position;
public:
    Employee(std::string name,std::string birthDate,std::vector<std::string> languages);
    void printInfo();
    void switchToManager(std::string specialization);
    void switchToPragrammator(std::vector<std::string> languages);
    ~Employee();
};


#endif //ZOO_CV_11_EMPLOYEE_H
