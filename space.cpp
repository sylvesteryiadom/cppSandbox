#include <iostream>
using namespace std;

int main()
{
    double earthWeight;
    int fightPlanet;
    cout << "What is your earth weight? \n";
    cin >> earthWeight;
    cout << "Enter a number for the planet you want to fight on.\n";
    cin >> fightPlanet;
    fightPlanet = 0;

    switch (fightPlanet)
    {
    case 1:
        cout << "Your weight is: " << (earthWeight * 0.78);
        break;
    case 2:
        cout << "Your weight is: " << (earthWeight * 0.39);
        break;
    case 3:
        cout << "Your weight is: " << (earthWeight * 2.65);
        break;
    case 4:
        cout << "Your weight is: " << (earthWeight * 1.17);
        break;
    case 5:
        cout << "Your weight is: " << (earthWeight * 1.05);
        break;
    case 6:
        cout << "Your weight is: " << (earthWeight * 1.23);
        break;
    default:
        cout << "Number not found! \n";
        break;
    }
}

// #include <iostream>

// int main() {

//   double weight;
//   int x;

//   std::cout << "Please enter your current earth weight: ";
//   std::cin >> weight;

//   std::cout << "\nI have information for the following planets:\n\n";
//   std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
//   std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";

//   std::cout << "Which planet are you visiting? ";
//   std::cin >> x;

//   if (x == 1) {

//     weight = weight * 0.78;

//   } else if (x == 2) {

//     weight = weight * 0.39;

//   } else if (x == 3) {

//     weight = weight * 2.65;

//   } else if (x == 4) {

//     weight = weight * 1.17;

//   } else if (x == 5) {

//     weight = weight * 1.05;

//   } else if (x == 6) {

//     weight = weight * 1.23;

//   }

//   std::cout << "\nYour weight: " << weight << "\n";

// }