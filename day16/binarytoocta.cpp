#include<iostream>
using namespace std;
int main(){
    //int num, rem, ans=0,mul=1;
    long long int  num, rem, ans=0,mul=1,octa=0;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    mul=1;
    while (ans>0)
    {
          rem=ans%8;
           ans=ans/8;
        octa=rem*mul+octa;
        mul=mul*10;
    }
 cout<<octa<<endl;
}