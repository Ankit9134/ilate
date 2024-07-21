#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        char name='a'+i-1;
        for (int j = i; j>=1; j--)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    
}