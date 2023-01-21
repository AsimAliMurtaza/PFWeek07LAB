#include <iostream>
using namespace std;

int totalDigits(int);
main()
{
    int num;
    int result;
    cout << "Enter digit: ";
    cin >> num;
    result = totalDigits(num);
    cout << result << endl;
}

int totalDigits(int num)
{
    int digit = 0;

    for(;num > 0; digit = digit + 1)
    {
        num = num / 10;
    }
    return digit;
}