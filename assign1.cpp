#include <iostream>
#include <cstdint> // for std::int_fast64_t

// note: exp must be non-negative
int base, exp;
std::int_fast64_t pow(int base, int exp)
{
    std::int_fast64_t result = 1;

    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    };

    return result;
}

int main()
{
    std::cout << "Enter a base: \n";
    std::cin >> base;
    std::cout << "Enter an exponent: \n";
    std::cin >> exp;
    std::cout << pow(base, exp); // 7 to the 12th power

    return 0;
}