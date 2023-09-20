#include<iostream>
#include<cmath>
using namespace  std;

int main(){
    float a,b,c,s, Area;
    cout<<"Enter a,b,c"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    
     s=a+b+c/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of Trianle is " <<Area;
    return 0;

}
