#include <iostream>
using namespace std;
char sym;
int check(char sym = 'Y')
{
    if (sym == 'Y')
    {
        sym = 'Y';
    }
    else if (sym == 'y')
    {
        sym = 'y';
    }
    else if (sym == 'N')
    {
        sym = 'N';
    }
    else if (sym == 'n')
    {
        sym = 'n';
    }
    return sym;
}

int main()
{

    cout << "Enter a character from these options (Y,y,N,n): \n";
    cin >> sym;

    switch (check(sym))
    {

    case 'Y':
        std::cout << "You chose " << sym;
        break;
    case 'y':
        std::cout << "You chose " << sym;
        break;
    case 'N':
        std::cout << "You chose " << sym;
        break;
    case 'n':
        std::cout << "You chose " << sym;
        break;
    default:
        std::cout << "You didn't choose a valid option\n";
        break;
    }
}