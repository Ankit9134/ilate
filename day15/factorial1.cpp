#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
     long long int fact=1;
   do
   {
    fact=fact*i;
    i++;
   } while (i<=n);
   
  cout<<"The fact of "<<n<<"= "<< fact;
}