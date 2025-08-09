#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <iostream>

class Employee : public Person {
    public:
        Employee(const std::string& name, int age, const std::string &title);
        void introduce();
        std::string getTitle() const;
        void setTitle(const std::string &title);

    private:
        std::string title;
};

#endif // EMPLOYEE_H