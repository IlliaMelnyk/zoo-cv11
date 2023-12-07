//
// Created by xmelnyk on 07.12.2023.
//

#include "Programator.h"
Programator::Programator(std::vector<std::string> languages){
    m_languages= languages;
}
void Programator::printInfo() {
    std::cout << "Languages: ";
    /*for(std::streing language: m_languages){
      std::cout<<language<<", ";
    }*/
    for(int i=0;i<m_languages.size();i++){
        std::cout<< m_languages.at(i)<<std::endl;
    }
}
//Programator::~Programator()  = default;