/*Reference Variable in C++ is just an alternate name for the existing variable. Both actually point to the same memory location. 
In other words, this reference variable refers to this existing variable*/

/*In a class, by default variables and methods are private*/

/*Few rules associated to refrence variables in C++ are:
1. We must initialize a refernce variable. You cannot do like this: int& myRef; 
2. Reference variable is a fixed connection. This mean that you cannot re-initialize it. 
3. A reference variable cannot be null. You cannot do like this: int& myRef= null;
4. You cannot create a narray of reference variables.*/

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