//Grading of student


#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Input marks of 5 subject";
    cin>>a>>b>>c>>d>>e;
    int per;
    per=((a+b+c+d+e)/5);
    cout<<"Percentage is "<<per<<endl;
    if((per>=90)&&(per<=100)){
        cout<<"A Grade"<<endl;
    }else if((per>=80)&&(per<90)){
        cout<<"B Grade"<<endl;

    }else if((per>=60)&&(per<80)){
        cout<<"C Grade"<<endl;

    }else if(per<60){
        cout<<"D Grade"<<endl;
    }
    return 0;

}
