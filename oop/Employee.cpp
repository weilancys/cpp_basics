#include "Employee.h"
#include <iostream>


Employee::Employee(const std::string& name, int age, const std::string &title) : Person(name, age), title(title) {};

void Employee::introduce() {
    std::cout << "Hello, my name is " << getName() << ", I am " << getAge() << " years old, and I am a " << getTitle() << "." << std::endl;
};

std::string Employee::getTitle() const {
    return this -> title;
};

void Employee::setTitle(const std::string &title) {
    this -> title = title;
};