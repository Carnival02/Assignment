//Reverse number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"input a number";
    cin>>n;
    int temp=0;
    int rem;
    while(n!=0){
        rem=n%10;
        temp=temp*10+rem;
        
        n=n/10;
    }cout<<"Reversed no= "<<temp<<endl;
    return 0;
}
