#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter the number: ";
    cin>>n;
    while (i<=n)
    {
      if (n%i==0)
      {
        cout<<"The factor of "<<n<<"is :"<<i<<endl;
      }
       i++;
    }

}