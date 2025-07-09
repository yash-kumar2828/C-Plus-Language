#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b==0){
        return 1;
    }else{
        return a*pow(a,b-1);
    }
}
int main(){
    int b,p;
    cout<<"enter base=";
    cin>>b;
    cout<<"enter power=";
    cin>>p;
    cout<<b<<" to the power of "<<p<<" is "<<pow(b,p);
    return 0;
}