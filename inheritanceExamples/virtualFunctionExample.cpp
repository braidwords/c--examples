#include<iostream>
/*The concept of inheritance is used  we want to write re-uasable code.
In C++, virtual keyword comes in play when we want to acheive late binding(Runtime Polymorphism) in case of overridden methods*/
/*In early binding, compiler do not take into account the address that pointer is pointing at.It just see the pointer type*/
/*In Late binding(Runtime Polymorphism), compiler takes into account the address at which pointer is pointing. The address is given importance here*/

class inheritanceBaseClass {

public:
    void printName()
    {
        std::cout << "In Base Class: Early Binding happenned" << std::endl;
    }

    virtual void show()
    {
        std::cout << "In Base Class: Late Binding happened" << std::endl;
    }
};

class inheritanceSubClass: public inheritanceBaseClass
{
public:
    void printName()
    {
        std::cout << "In Sub-Class: Early Binding happenned" <<std::endl;
    }

     void show()
    {
        std::cout << "In Sub-Class: Late Binding happened" << std::endl;
    }
};
