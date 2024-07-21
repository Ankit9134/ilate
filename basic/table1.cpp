#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = n; i <=10*n; i=i+n)
    {
        cout<<n<<'*'<<i<<" "<<i<<endl;
    }
    
}
