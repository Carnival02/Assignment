//Area and cirumference of circle

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float r;
    cout<<"input radius";
    cin>>r;
    float area,cirumference;
    area= (M_PI*r*r);
    cirumference=(2*(M_PI)*r);
    cout<<"Area "<<area<<endl;
    cout<<"cirumference "<<cirumference<<endl;
    return 0;

}
