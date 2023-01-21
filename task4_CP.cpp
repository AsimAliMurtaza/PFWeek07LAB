#include <iostream>
using namespace std;

void printFibo(int num);
main()
{
    int num = 0;
    cout << "Enter number: ";
    cin >> num;
    printFibo(num);

}

void printFibo(int num)
{
    if(num>2)
    {
    int num1 = 0;
    int num2 = 1;
    int sum = 0;

    cout << "0" << endl;
    cout << "1" << endl;
        for(int count = 0; count < num - 2; count = count + 1)
        {
            sum = num1 + num2;
            cout << sum << endl;
            num1 = num2;
            num2 = sum;
        }
    }
    else if(num==2)
    {
        cout << "0" << endl;
        cout << "1" << endl;
    }
    else if(num<2)
    {
        cout << "0" << endl;
    }
}