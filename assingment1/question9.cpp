//Leap year

#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Input a year";
    cin>>y;
    if((y%4==0) && (y%100!=0) || (y%400==0)){
        cout<<"Year is leap year "<<endl;

    }else{
        cout<<"year is not leap year "<<endl;
    }
    return 0;
}
