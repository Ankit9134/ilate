#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>v1(5,1);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v[1]=5;
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(8);
    vnew.push_back(13);
    vnew.push_back(48);
    vnew.push_back(84);
    vnew.push_back(45);
    vnew.pop_back();
    cout<<"Size of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

}
