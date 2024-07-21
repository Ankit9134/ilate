#include<iostream>
using namespace std;
int main(){
    int n,pow;
    int num=1;
    cout<<"Enter the number: ";
    cin>>n;
   cout<<"Enter the power: ";
    cin>>pow;
    //num=n;
    for (int i = 1; i <=pow; i++)
    {
        num=num*n;
    }
    cout<<num;

    cin.get();
}
