#include <iostream>
#include "Person.h"
#include "SP.h"

using namespace std;
int main() {
    
    SP<Person> p1(new Person(21, "cat"));
    p1->display();
    {
        SP<Person> p2(p1); // using copy constructor
        p2->display();
        
        SP<Person> p3;
        p3 = p1; // using assignment operator
        p3->display();
        
        SP<Person> pX(new Person(25, "dog"));
        pX->display();
        
        p1 = pX;
    }
    
    p1->display();
    
    // No need to delete the SP
    
    return 0;
}
