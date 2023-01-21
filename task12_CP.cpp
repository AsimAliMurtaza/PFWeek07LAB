#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);


main()
{
    int number1;
    int number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    int result = calculateGCD(number1, number2);
    int result2 = calculateLCM(number1, number2, result);
    cout << "LCM is: " << result2 << endl;
}

int calculateGCD(int number1, int number2)
{
    int gcd = 0;

        for(int x = 1; x <= number1; x = x + 1)
        {
            number1 % x;
            number2 % x;
            if(number1 % x == 0 && number2 % x == 0)
            {
                gcd = x;
            }
        }
    return gcd;
}
int calculateLCM(int number1, int number2, int result)
{
    int lcm;
    lcm = ((number1 * number2) / result);
    return lcm;
}
