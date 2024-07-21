#include<iostream>
using namespace std;
int main(){
    int n,rem=0,dec=0,mul=1;
    cout<<"Enter the binary number: ";
    cin>>n;
    int num=n;
    for (int i = num; i>0; i--)
    {
       rem=num%10;
       num=num/10;
       dec=rem*mul+dec;
       mul=mul*2;
    }
    cout<<"Binary "<<n<<" to "<<"Decimal"<<"= "<<dec<<endl;
}