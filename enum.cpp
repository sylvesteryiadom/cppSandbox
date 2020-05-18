#include <iostream>
using namespace std;

int main()
{
    enum Day
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    // defaults can be changed by specifying which value is which

    // eg:
    // enum Day
    // {
    //     Sunday,
    //     Monday = 3,
    //     Tuesday,
    //     Wednesday,
    //     Thursday,
    //     Friday,
    //     Saturday
    // };

    Day payday;
    payday = Friday;
    cout << payday << endl;

    // First Name - string , because first name are mainly letters.
    // Street Address - struct , because it will contain numbers and letters
    // Birth Date - int , because it is mostly numbers
    // Zip/Postal Code - int , because zipcodes are mostly numbers
    // Bank Account Balance - int , probably long int, but then again they are integers
    // Months of the Year - can be an enum.
}