#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    /*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

    int user = 0;
    int computer = rand() % 3 + 1;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! ";

    cin >> user;

    if (computer == '✊' && user == '✋')
    {
        cout << "Computer Wins\n";
    }
    else if (user == '✊' && computer == '✋')
    {
        cout << "User Wins\n";
    }
    else if (computer == '✊' && user == '✊')
    {
        cout << "Its a tie\n";
    }
    else if (computer == '✊' && user == '✌️')
    {
        cout << "Computer Wins\n";
    }
    else if (computer == '✌️' && user == '✊')
    {
        cout << "User Wins\n";
    }
    else if (computer == '✌️' && user == '✋')
    {
        cout << "Computer Wins\n";
    }
    else if (user == '✌️' && computer == '✋')
    {
        cout << "User Wins\n";
    }
    else
    {
        cout << "Its a TIE\n";
    }
}