/*In C++, a method can return a reference. 
One thing that must be kept in mind while returnign a referenece from a method is that it must not pass the reference to a local variables as it will go out of scope.
It must pass references of static variables so that such variables can outlive the scope and can be used further.*/

#include<iostream>
class methodReturningReference {

public:
    int& sum(int &a, int &b)
    {
        static int result;
        result = a + b;
        return result;
    }

};
 