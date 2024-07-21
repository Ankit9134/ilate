#include<iostream>
using namespace std;
int main(){
   // int num, rem,ans=0 ,mul=1;
    long long int num, rem,ans=0 ,mul=1;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {
        //rem=num%2;
        rem=num&1;
       //num=num/2;
       num=num>>1;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<ans<<endl;

}