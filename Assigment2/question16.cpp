//prime check

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input a number";
    cin>>n;
    int flag=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag =1;
            break;
        }
    }if(flag==1){
        cout<<"Not prime"<<endl;

    }else{
        cout<<"Prime"<<endl;
    }
    return 0;
}
