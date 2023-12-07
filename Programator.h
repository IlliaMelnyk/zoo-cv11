//
// Created by xmelnyk on 07.12.2023.
//

#ifndef ZOO_CV_11_PROGRAMATOR_H
#define ZOO_CV_11_PROGRAMATOR_H
#include "iostream"
#include "WorkState.h"
#include "vector"
class Programator : public WorkState{
std::vector<std::string> m_languages;
public:
    Programator(std::vector<std::string> languages);
    void printInfo() override;
    ~Programator() override = default;
};


#endif //ZOO_CV_11_PROGRAMATOR_H
