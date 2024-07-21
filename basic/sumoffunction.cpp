#include<iostream>
using namespace std;
int sum(int m,int n){
    int ans=m+n;
    return ans;
}
int mul(int m,int n){
    int ans=m*n;
    return ans;
}
void fun(){
cout<<"Hello Ankit";
}
int main(){
int a,b,c,d;
cout<<"Enter the number of a: ";
cin>>a;
cout<<"Enter the number of b: ";
cin>>b;
cout<<"Enter the number of c: ";
cin>>c;
cout<<"Enter the number of d: ";
cin>>d;
cout<<sum(a,b)<<endl;
cout<<sum(c,d)<<endl;
cout<<mul(a,b)<<endl;
cout<<mul(c,d)<<endl;
fun();
}
