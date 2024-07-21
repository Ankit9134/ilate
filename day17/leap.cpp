#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the leap year: ";
    cin>>n;
    if ((n % 4 == 0) && (n % 100 != 0))
    {
        cout << "This is a leap Year: ";
    }
    else if (n % 400 == 0)
    {
        cout << "THis is a Leap Year";
    }
    else
        cout << "Not a Leap Year";
}
