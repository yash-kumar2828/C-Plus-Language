#include<iostream>
using namespace std;
int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"enter n=";
    cin>>n;
    cout<<"enter r=";
    cin>>r;
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    cout<<"combination is "<<a/(b*c);
    return 0;
}