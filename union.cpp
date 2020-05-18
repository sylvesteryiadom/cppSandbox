#include <iostream>
using namespace std;

int main()
{
    union numericUnion {

        int intValue;
        long longValue;
        double doubleValue;
    };
    // Unions

    numericUnion myUnion;
    myUnion.intValue = 10;
    cout << myUnion.intValue << "\n";
    myUnion.doubleValue = 20.666;
    cout << myUnion.doubleValue << "\n";
    cout << myUnion.intValue;
}