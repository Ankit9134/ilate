#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if (n<2)
    {
        cout<<"Not a prime number:";
        return 0;
    }
   else{
    for (int  i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"Not a prime number:";
            return 0;
        }
    }
    
        cout<<"A prime number";
   }
}

