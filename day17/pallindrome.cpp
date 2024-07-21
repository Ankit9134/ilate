#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num=n ,ans=0, rem;
    while (num>0)
    {
        rem =num%10;
        num=num/10;
        ans=ans*10+rem;
    }
    if (n==ans)
    {
        cout<<"Palindrome number yes:"; 
    }
    else{
        cout<<"Not a palindrome Number: ";
    }
}