/*in C++, we can actually pass parameters to a function by three methods:
1. Pass by value
2. Pass by address
3. Pass by reference*/

#include<iostream>

class swapVariables
{
public:
    void swapNumbers(int a, int b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
        std::cout << "Our numbers have been swapped through pass by reference." << std::endl;
        std::cout << "Now a is: " << a << std::endl;
        std::cout << "Now b is: " << b << std::endl;
    }
};