#include<iostream>
using namespace std;
int mainj(){
    int n,rem,bin=0,mul=1;
    cout<<"Enter the decimal number: ";
    cin>>n;
    int num=n;
    for (int i = num; i>0; i--)
    {
        rem=num%2;
        num=num/2;
        bin=rem*mul+bin;
        mul=mul*10;
    }
    cout<<"Decimal "<<n<<" to "<<"Binary = "<<bin<<endl;
}