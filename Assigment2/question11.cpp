//calculator

#include<iostream>
using namespace std;
int main(){
    char op;
    float a,b;
    cout<<"Enter operators +,-,*,/";
    cin>>op;
    cout<<"Enter operands";
    cin>>a>>b;
    switch (op)
    {case '+':

    cout<<a<<"+"<<b<<"="<<a+b;
    break;
    case '-':
    cout<<a<<"-"<<b<<"="<<a-b;
    break;
    case '*':
    cout<<a<<"*"<<b<<"="<<a*b;
    break;
    case '/':
    cout<<a<<"/"<<b<<"="<<a/b;
    break;    
}
return 0;
}
