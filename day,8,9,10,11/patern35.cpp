#include<iostream>
using namespace std;
int main(){
    int n,m ,o;
    cout<<"Enter the row number: ";
    cin>>n;
     cout<<"Enter the columns number: ";
    cin>>m;
     cout<<"Enter the intial number: ";
    cin>>o;
    for (int i = o; i <=n+o; i++)
    {
        for (int j =o; j<=i; j++)
        {
           // cout<<i<<" ";
           cout<<j<<" ";
        }
        cout<<endl;
    }
    
}