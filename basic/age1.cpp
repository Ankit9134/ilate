#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<13)
    {
        cout<<"You are a child.";
    }
    else if (n>=13&&n<20)
    {
       cout<<"You are a teenager.";
    }
    else{
        cout<<"You are an adult.";
    }
    
    
}