#include "Person.h"

Person::Person(int age, std::string name) : _age(age), _name(name) {

}

Person::~Person() {
    std::cout<<_name +"'s destructor is called."<<std::endl;
}

void Person::display()
{
    std::cout << "Name = " << _name << ", Age = " << _age << std::endl;
}

void Person::shout()
{
    std::cout<<("Ooooooooooooooooo")<<std::endl;
}

