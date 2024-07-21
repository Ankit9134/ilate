#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
     long long int fact=1;
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
  cout<<"The fact of "<<n<<"= "<< fact;
}