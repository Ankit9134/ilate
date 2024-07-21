#include<iostream>
using namespace std;
int main(){
    long int n ;
    signed int fact=1;
    cout<<"Enter the number: ";
    cin>>n;
    for ( long int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    cout<<"The factroial of "<<n<<" is ="<<fact;
}
