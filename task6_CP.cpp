#include <iostream>
using namespace std;

int freqCheck(int, int);
main()
{
    int num;
    int digit;
    int result;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter digit: ";
    cin >> digit;
    result = freqCheck(num, digit);
    cout << result << endl;
}

int freqCheck(int num, int digit)
{
    int noOfNum = 0;
    int currentdigit = 0;

    for(int x = 0; num > 0; x = x + 1)
    {
        currentdigit = num%10;
        if(currentdigit == digit){noOfNum++;}
        num = num / 10;
    }
    return noOfNum;
}