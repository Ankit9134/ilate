#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j>=n-(i-1); j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}