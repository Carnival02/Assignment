//sum fo digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input a number";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        int temp=n%10;
        sum=sum+temp;
        n=n/10;


    }
    cout<<"Sum= "<<sum<<endl;
    return 0;
}
