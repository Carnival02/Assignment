//sum and percentage

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Input marks of the five subjects";
    cin>>a>>b>>c>>d>>e;
    int sum,percentage;
    sum=(a+b+c+d+e);
    percentage=((sum)/5);
    cout<<"Sum is "<<sum<<endl;
    cout<<"Percentage is "<<percentage<<endl;
    return 0;
}
