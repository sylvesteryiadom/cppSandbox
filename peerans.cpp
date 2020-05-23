#include <iostream>
using namespace std;

void exp(int base, int exponent)
{
    int ans = 1;
    for (int i = 0; i < exponent; i++)
    {
        ans *= base;
    }
    std::cout << ans << endl;
}

int main()
{
    exp(2, 2);
}