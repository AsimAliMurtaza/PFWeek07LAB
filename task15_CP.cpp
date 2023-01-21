#include <iostream>
using namespace std;

float calculatePrice(float money, int year);
main()
{
    float money;
    int year;
    float result;
    float finalResult;

    cout << "Enter amount of money: ";
    cin >> money;
    cout << "Enter year to which he has to live in: ";
    cin >> year;
    result = calculatePrice(money, year);
    if(result<money)
    {
        finalResult = money - result;
        cout << "Yes! He will live a carefree life and will have " << finalResult << " dollars left";
    }
    else
    {
        finalResult = result - money;
        cout << "He will need " << finalResult << " dollars to survive";
    }
}

float calculatePrice(float money, int year)
{
    int evenSpend = 0;
    int totalMoney = 0;
    int ageCounter = 18;
    int yearCount = 0;
    int counter = 0;
    int counter2 = 0;

    int oddSpend = 0;

    for(yearCount = 1800; yearCount<=year; yearCount = yearCount + 2)
    {
        if(yearCount % 2==0)
        {
        counter = counter + 1;
        evenSpend = counter * 12000;
        }
    }

    for(yearCount = 1801; yearCount<=year; yearCount = yearCount + 2)
    {
            if(yearCount % 2 !=0)
        {
            counter2 = counter2 + 1;
            ageCounter = ageCounter + 1;
            oddSpend = counter2 * (12000 + (50* ageCounter));
        }
    }

    totalMoney = oddSpend + evenSpend;
    return totalMoney;

}