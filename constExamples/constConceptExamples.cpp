#include<iostream>
#include<string>


class constExamples
{
    /*1. The first usage of const in C++ is to have constant values. The values that will never change throughtout.*/
public:
    void generateBill()
    {
        const int MAX_DISCOUNT = 20;
        // MAX_DISCOUNT = 250/any other value should not be done. 

        int price = 1000;
        int margin = 300;
        const int* a = &price;
        int total_price = ((*a) + margin) - MAX_DISCOUNT;
        std::cout << total_price;
    }

};