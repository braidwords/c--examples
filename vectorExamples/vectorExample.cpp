#include<iostream>
#include<vector>
#include<string>

using namespace std;

class vectorExample {
public:
    vector<int> myvector; // a vector of integers returned from the function doubleOfNumber.
    std::vector<int>::iterator it;  // declare an iterator to a vector of strings
    int doubleOfNumber(int a)
    {
        int result = (a * a);
        return result;
    }

    void storeResults(int doubleResults)
    {
        // push results in the vector.
        myvector.push_back(doubleResults);
    }

    void printResults()
    {
        //now start at from the beginning
       // and keep iterating over the element till you reach the end of vector.
        std::cout << "My vector contains:";
        for (it = myvector.begin(); it != myvector.end(); ++it)
        {
            std::cout << ' ' << *it;
            std::cout << '\n';
        }
    }
};
