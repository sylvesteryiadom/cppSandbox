#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int answer;
    cout << "MAGIC 8 BALL: \n";
    srand(time(NULL));
    answer = rand() % 10;

    cout << answer;

    if (answer == 0)
    {
        cout << "It is certain\n";
    }
    else if (answer == 1)
    {
        cout << "Its Magic\n";
    }
    else if (answer == 2)
    {
        cout << "Its NOT Magic\n";
    }
    else if (answer == 3)
    {
        cout << "Its TARZAN\n";
    }
    else if (answer == 4)
    {
        cout << "Its NOT TARZAN\n";
    }
    else if (answer == 5)
    {
        cout << "Its BOBBY ROBSON\n";
    }
    else if (answer == 6)
    {
        cout << "Its NOT BOBBY ROBSON\n";
    }
    else if (answer == 7)
    {
        cout << "Its ABOUT TO HAPPEN\n";
    }
    else if (answer == 8)
    {
        cout << "Its NOT ABOUT TO HAPPEN\n";
    }
    else
    {
        cout << "Very doubtful.\n";
    }
}