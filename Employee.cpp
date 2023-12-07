//
// Created by xmelnyk on 07.12.2023.
//

#include "Employee.h"
#include "Programator.h"
#include "Manager.h"
Employee::Employee(std::string name,std::string birthDate,std::vector<std::string> languages){
m_name=name;
m_birthDate=birthDate;
m_position= new Programator(languages);
}
void Employee::printInfo(){
std::cout<<"Name: "<<m_name<<"\n"
<<" BirthDate: "<<m_birthDate<<"\n";
m_position->printInfo();
}
void Employee::switchToPragrammator(std::vector<std::string> languages){
    delete m_position;
    m_position = new Programator(languages);
}
void Employee::switchToManager(std::string specialization){
delete m_position;
m_position = new Manager(specialization);
}

Employee::~Employee(){
delete m_position;
}