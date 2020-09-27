// c++-examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../referenceVariableExample/referenceVariableExample.cpp"
#include "../referenceVariableExample/swapVariables.cpp"
#include "../referenceVariableExample/methodReturningReference.cpp"
#include "../structExamples/oddEven.cpp"
#include "../vectorExamples/vectorExample.cpp"

/*Function defined to return a struct(two variables*/
myStruct findEvenOdd(int number1, int number2)
{
    myStruct s;
    if (number1 % 2 == 0)
    {
        s.evenNumber = number1;
        s.oddNumber = number2;
    }
        
    else
    {
        s.evenNumber = number2;
        s.oddNumber = number1;
    }
    return s;
}

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
    result = methodObject.sum(a, b);
    std::cout << "The sum of the numbers is: " << result << std::endl;

    /*4. Creating an object of struct oddEven to see how multiple values are returned using a structure in C++
    Function findEvenOdd has been declared above for this */
    myStruct s;
    s=findEvenOdd(a, 33);
    std::cout << "Even number is: " << s.evenNumber << std::endl;
    std::cout << "Odd number is: " << s.oddNumber << std::endl;

    /*5. Trying to return double of numbers passed to the function through a loop, storing it in a vector and then printing the results from the vector*/
    vectorExample vectorExample;
    for (int i = 0; i < 5; i++)
    {
        int doubleResults = vectorExample.doubleOfNumber(i);
        vectorExample.storeResults(doubleResults);
    }
    vectorExample.printResults();

}




