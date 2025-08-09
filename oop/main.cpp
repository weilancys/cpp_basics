#include "Person.h"
#include "Employee.h"

int main() {
    Person p1("Alice", 30);
    p1.introduce();

    Employee e1("Bob", 25, "manager");
    e1.introduce();

    Person *p2 = &e1;
    p2 -> introduce(); // uses the introduce() method from the Person class, not the Employee class

    Person &p3 = e1;
    p3.introduce(); // same as above

    return 0;
}