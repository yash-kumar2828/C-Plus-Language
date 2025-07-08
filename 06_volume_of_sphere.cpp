#include<iostream>
using namespace std;
int main(){
    float PI=3.14,r,v;
    cout<<"enter radius=";
    cin>>r;
    v=(PI*r*r*r)*4/3;
    cout<<"the volume of a sphere is "<<v;
    return 0;
}