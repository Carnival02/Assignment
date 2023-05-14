//sum of odd and even

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input a number";
    cin>>n;
    int sum=0;
    int sum1=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;

        }else{
            sum1=sum1+i;
        }
       
    } cout<<"Sum of even "<<sum<<endl;
        cout<<"Sum of odd "<<sum1<<endl;
    return 0;
}
