#include <iostream>

int main()
{
    double pesos, reais, soles, dollars;

    // 1 pesos - 0.042 usd
    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    // 1 reais to 0.18 dollars
    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;

    // 1 soles to 0.29 dollars
    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    dollars = (0.042 * pesos) + (0.18 * reais) + (0.29 * soles);

    std::cout << "US Dollars = $ " << dollars;
}