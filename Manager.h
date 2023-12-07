//
// Created by xmelnyk on 07.12.2023.
//

#ifndef ZOO_CV_11_MANAGER_H
#define ZOO_CV_11_MANAGER_H
#include "iostream"
#include "WorkState.h"
class Manager: public WorkState{
std::string m_specialiazation;
public:
    Manager(std::string specialiazation);
    void printInfo() override;
    virtual ~Manager() = default;
};


#endif //ZOO_CV_11_MANAGER_H
