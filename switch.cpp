#include <iostream>
using namespace std;

int main()
{
    int number = 9;

    switch (number)
    {

    case 1:
        std::cout << "Bulbusaur\n";
        break;
    case 2:
        std::cout << "Ivysaur\n";
        break;
    case 6:
        std::cout << "Charizard\n";
        break;
    case 7:
        std::cout << "Squirtle\n";
        break;
    case 8:
        std::cout << "Wartortle\n";
        break;
    case 9:
        std::cout << "Blastoise\n";
        break;
    default:
        std::cout << "Unknown\n";
        break;
    }
}