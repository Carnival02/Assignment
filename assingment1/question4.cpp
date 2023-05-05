//Tempregture converstion

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float c;
    cout<<"Input tempreature in deg celcius";
    cin>>c;
    float f;
    f=((c*9/5)+32);
    cout<<"Tempreture in Fahrenheit "<<f<<endl;
    return 0;

}
