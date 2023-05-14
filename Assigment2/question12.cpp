//sum of all number before n

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;

    }
    cout<<"sum is "<<sum;
    return 0;
}
