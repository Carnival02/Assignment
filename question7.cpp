//Greatest number

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Input three numbers";
    cin>>a>>b>>c;
    if((a>b)&&(a>c)){
        cout<<"The greatest no is "<<a<<endl;
    }
    else if((b>a)&&(b>c)){
        cout<<"The greatest no is "<<b<<endl;
    }else{
        cout<<"the greatest no is "<<c<<endl;
    }
    return 0;
    
}
