// c++-examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../referenceVariableExample/referenceVariableExample.cpp"
#include "../referenceVariableExample/swapVariables.cpp"
#include "../referenceVariableExample/methodReturningReference.cpp"

int main()
{
    int a = 10;
    int b = 20;
    int result = 0;
    /*1. Creating an object of referenceVariableExample to call its method */
    referenceVariableExample referenceVariableExample;
    referenceVariableExample.print();

    /*2.Creating an object of swapVariables to call the method to swap the number by using pass by reference*/
     swapVariables swap; 
     swap.swapNumbers(a, b);

     /*3. Creating an object of class methodReturningReference to see how this concept works */
     
     methodReturningReference methodObject;
     result = methodObject.sum(a,b);
     std::cout << "The sum of the numbers is: " << result << std::endl;
}

