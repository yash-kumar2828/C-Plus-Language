#include<iostream>
using namespace std;
int main(){
    float p,r,t,SI;
    cout<<"enter a principle=";
    cin>>p;
    cout<<"enter rate=";
    cin>>r;
    cout<<"enter a time=";
    cin>>t;
    SI=(p*r*t)/100;
    cout<<"simple interest is "<<SI;
    return 0;
}