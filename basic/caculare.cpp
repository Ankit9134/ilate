#include<iostream>
using namespace std;
int main()
{
    int op1,op2;
    int result;
    char op;
    cout<<"Enter the first number: ";
    cin>>op1;
    cout<<"Enter the second number: ";
    cin>>op2;
    cout<<"Enter the operator number: ";
    cin>>op;
    switch (op)
    {
    case '+':
        result=op1+op2;
        cout<<"The sum of two number: "<<result;
        break;
        case '-':
        result=op1-op2;
        cout<<"The differnce of two number: "<<result;
        break;
        result=op1*op2;
        cout<<"The multiple of two number: "<<result;
        break;
        result=op1/op2;
        cout<<"The division of two number: "<<result;
        break;
        result=op1%op2;
        cout<<"The remider of two number: "<<result;
        break;
    
    default:
       cout<<"Involid";
        break;
    }

}