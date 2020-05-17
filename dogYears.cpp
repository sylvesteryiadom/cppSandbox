#include <iostream>

int main()
{
    int dog_age, early_years, later_years, human_years;
    dog_age = 5;
    early_years = 21;
    later_years = (dog_age - 2) * 4;
    human_years = early_years + later_years;
    std::cout << "My Name is Yoggy! Ruff ruff, I am " << human_years << " years old in human years\n";
}