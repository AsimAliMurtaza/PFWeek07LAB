#include <iostream>
using namespace std;

float calculateMoney(float, float, float);

main()
{
    float lilyAge;
    float toysPrice;
    float machinePrice;
    float finalMoney;

    cout << "enter lily's age (1-77); ";
    cin >> lilyAge;
    cout << "enter price of washing machine: ";
    cin >> machinePrice;
    cout << "enter price of toys: ";
    cin >> toysPrice;
    finalMoney = calculateMoney(lilyAge, toysPrice, machinePrice);

    if(finalMoney>machinePrice)
    {
        finalMoney = finalMoney - machinePrice;
        cout << "Yes " << finalMoney << "$ left."<< endl;
    }
    else
    {
        finalMoney = machinePrice - finalMoney;
        cout << "No " << finalMoney << "$ needed to buy" << endl;   
    }
}

float calculateMoney(float lilyAge, float toysPrice, float machinePrice)
{

    float toys = 0;
    float toysMoney = 0;
    float money = 0;
    float moneyAfter = 0;
    float sum = 0;
    float count = 0;
    float totalMoney = 0;
    float finalMoney = 0;

    for(int evenAge = 2; evenAge<=lilyAge; evenAge = evenAge + 2)
    {
            money = 5 * evenAge;
            sum = sum + money;
            count = count + 1;
    }
    
    moneyAfter = sum - count;

    for(int oddAge = 1; oddAge<=lilyAge; oddAge = oddAge + 2)
    {
        if(oddAge % 2 != 0)
        {
            toys = toys + 1;
        }
    }
    
    toysMoney = toysPrice * toys;
    totalMoney = toysMoney + moneyAfter;

    return totalMoney;
}