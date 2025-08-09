#include "Person.h"

Person::Person(const std::string& name, int age) : name(name), age(age) {};

void Person::introduce() const {
    std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
}

std::string Person::getName() const {
    return this -> name;
}

int Person::getAge() const {
    return this -> age;
}

void Person::setName(const std::string& name) {
    this -> name = name;
}

void Person::setAge(const int age) {
    this -> age = age;
}