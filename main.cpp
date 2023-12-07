#include <iostream>
#include "WorkState.h"
#include "Employee.h"
#include "Manager.h"
#include "Programator.h"
int main() {
    Employee * employee1= new Employee("David","23.96.2005",{"Java","Python"});
    employee1->printInfo();
    std::cout<<"-----------"<<std::endl;
    employee1->switchToManager("Economy");
    employee1->printInfo();
    std::cout<<"-----------"<<std::endl;
    employee1->switchToPragrammator({"C++"});
    employee1->printInfo();
            return 0;
}
