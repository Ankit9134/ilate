#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row number: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<i<<" ";
           //cout<<j<<" ";
        }
        cout<<endl;
    }
    
}