#include <iostream>
using namespace std;

int base, exp;
int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    std::cout << "Enter a base: \n";
    std::cin >> base;
    std::cout << "Enter an exponent: \n";
    std::cin >> exp;
    std::cout << power(base, exp); // 7 to the 12th power

    return 0;
}