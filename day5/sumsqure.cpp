#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the netural number";
     cin>>n;
    for (int i = 1; i < n; i++)
    {
        sum=sum+i*i;
    }
    cout<<"The squre sum of natural number: "<<sum;
}