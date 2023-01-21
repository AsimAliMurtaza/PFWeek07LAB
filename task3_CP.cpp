#include <iostream>
using namespace std;

void table(int num);
main()
{
    int num = 0;
    cout << "Enter number: ";
    cin >> num;
    table(num);
}

void table(int num)
{
    for (int count = 1; count <= 10; count = count + 1)
    {
        int table = num * count;
        cout << num << "x" << count << "=" << table << endl;
    }
}