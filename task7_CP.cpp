#include <iostream>
using namespace std;

int digitSum(int number);

main()
{
    int digit;
    int result;
    cout << "Enter a digit: ";
    cin >> digit;

    result = digitSum(digit);
    cout << result << endl;
}

int digitSum(int digit)
{
    int sum = 0;
    int number = 0;
    for(int x = 0; digit > 0; x = x + 1)
    {
        number = digit % 10;
        digit = digit / 10;
        sum = sum + number;
    }

    return sum;

}