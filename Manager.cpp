//
// Created by xmelnyk on 07.12.2023.
//

#include "Manager.h"
Manager::Manager(std::string specialiazation){
m_specialiazation=specialiazation;
}
void Manager::printInfo(){
std::cout<<"Specialization: "<<m_specialiazation<<std::endl;
}