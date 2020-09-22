/*Reference Variable in C++ is just an alternate name for the existing variable. Both actually point to the same memory location. 
In other words, this reference variable refers to this existing variable*/

/*In a class, by default variables and methods are private*/

#include<iostream>

class referenceVariableExample {

public:
    void print()
    {

    int myVar = 100;
    int& myRef = myVar;

    std::cout << "Variable is: " << myVar << std::endl;
    std::cout << "Reference variable value is: " << myRef << std::endl;

     //when we change the value through reference then, it will reflect in the variable too.
     myRef = 200;

     std::cout << "Reference variable value is: " << myRef << std::endl;
     std::cout << "Variable is: " << myVar << std::endl;
     

    }

};