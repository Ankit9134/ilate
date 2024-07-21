#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the value: ";
    cin >> x;
    while (x != 1)
    {
        if (x % 2 == 1)
        {
            cout << "no";
            return 0;
        }
        else
        {
            x = x / 2;
        }
    }
    cout << "yes";
}