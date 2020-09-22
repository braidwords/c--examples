// c++-examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../referenceVariableExample/referenceVariableExample.cpp"
#include "../referenceVariableExample/swapVariables.cpp"

int main()
{
    /*1. Creating an object of referenceVariableExample to call its method */
    referenceVariableExample referenceVariableExample;
    referenceVariableExample.print();

    /*2.Creating an object of swapVariables to call the method to swap the number by using pass by reference*/
     swapVariables swap; 
     int a = 10;
     int b = 20;
     swap.swapNumbers(a, b);
}

