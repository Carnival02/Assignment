//factorial

#include<iostream>
using namespace std;
int main(){
    int n;
    int f=1;

    cout<<"Input  a number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }cout<<"factorial is "<<f<<endl;
    return 0;
}
