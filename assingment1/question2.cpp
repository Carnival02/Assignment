//Simple interest and compound interest

#include<iostream>
#include<math.h>
using namespace std;
int main()
{int p,r,t;
cout<<"Input principle amount,Rate,Time";
cin>>p>>r>>t;
int SI,CI;
SI=((p*r*t)/100);
CI= (p*pow((1+r/100),t));
cout<<"Simple interset "<<SI<<endl;
cout<<"Compound interser "<<CI<<endl;
return 0;
}
