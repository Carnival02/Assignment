//binary to decimal
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    float answer=0;int i=0;
    cin>>n;
    while(n!=0){
        int bit=n&1;
        answer=(bit*pow(10,i))+answer;
        n=n>>1;
        i++;

    }
    cout<<"Binary form is "<<answer<<endl;
    return 0;
    
}
