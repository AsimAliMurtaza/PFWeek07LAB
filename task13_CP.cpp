#include <iostream>
using namespace std;

void isPercent(float range);

main()
{
    float range;
    cout << "Enter range: ";
    cin >> range;
    isPercent(range);
}

void isPercent(float range)
{
    float number;
    float number1 = 0;
    float number2 = 0;
    float number3 = 0;
    float number4 = 0;
    float number5 = 0;
    float percentOne;
    float percentTwo;
    float percentThree;
    float percentFour;
    float percentFive;

    for(float counter = 1; counter<=range; counter = counter + 1)
    {
        cout << "Enter number: ";
        cin >> number;

        if(number<200)
        {
            number1 = number1 + 1;
        }

        if(number>=200 && number<400)
        {
            number2 = number2 + 1;
        }

        if(number>=400 && number<600)
        {
            number3 = number3 + 1;
        }

        if(number>=600 && number<800)
        {
            number4 = number4 + 1;
        }

        if(number>=800 && number<1000)
        {
            number5 = number5 + 1;
        }

        percentOne = ((number1 / range) * 100);
        percentTwo = ((number2 / range) * 100);
        percentThree = ((number3 / range) * 100);
        percentFour = ((number4 / range) * 100);
        percentFive = ((number5 / range) * 100);
    }

        cout << "Between 1-200 : " << percentOne << "%" << endl;
        cout << "Between 200-400 : " << percentTwo << "%" << endl;
        cout << "Between 400-600 : " << percentThree << "%" << endl;
        cout << "Between 600-800 : " << percentFour << "%" << endl;
        cout << "Between 800-1000 : " << percentFive << "%" << endl;
}