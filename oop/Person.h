#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
    public:
        Person(const std::string& name, int age);
        void introduce() const;
        std::string getName() const;
        void setName(const std::string& name);
        int getAge() const;
        void setAge(const int age);

    private:
        std::string name;
        int age;
};

#endif // PERSON_H