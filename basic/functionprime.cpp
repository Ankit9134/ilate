#include<iostream>
using namespace std;
int prime(int n);
int main(){
int a,b;
cout<<"Enter the number: "<<endl;
cin>>a;
cout<<"Enter the number: "<<endl;
cin>>b;

 prime(a);
 prime(b);
}
int prime(int n){
if (n<2){
   cout<<"Not a prime number "<<endl;
   return 0;
}
else{
for (int i = 2; i <n; i++)
{
   if (n%2==0)
   {
     cout<<"Not a prime number "<<endl;
     return 0;
   }
}
} 
    cout<<"A prime number "<<endl;

}



