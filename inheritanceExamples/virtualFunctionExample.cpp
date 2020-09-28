#include<iostream>
/*The concept of inheritance is used when code duplicacy need to be avoided or, we can say when we want to write re-uasable code.
In C++, virtual function concept comes in when we want to acheive late binding*/

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