#ifndef __HelloCpp__Person__
#define __HelloCpp__Person__

#include <iostream>
#include <string>

class Person {
    
private:
    int _age;
    std::string _name;
    
public:
    Person(int age, std::string name);
    ~Person();
    
    // methods for demo purpose
    void display();
    void shout();
};

#endif /* defined(__HelloCpp__Person__) */