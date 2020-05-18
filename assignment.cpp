#include <iostream>
using namespace std;

int main()
{
    enum MonthsofTheYear
    {
        January = 1,
        february,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    MonthsofTheYear ewMonth = April;

    cout << ewMonth << endl;
}