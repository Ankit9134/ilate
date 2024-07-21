#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n == 0)
    {
        cout <<"Complement number=1";
    }
    else{
    int ans = 0, rem, mul = 1;
    while (n > 0)
    {
        rem = n % 2;
        rem = rem ^ 1;
        n = n / 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    cout << "Complement number=" << ans;
    }
}