#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}
int mod(int a,int b){
    return a%b;
}
int main(){
    int a,b;
    cout<<"enter first number=";
    cin>>a;
    cout<<"enter second number=";
    cin>>b;
    cout<<"addition of two number "<<add(a,b)<<endl;
    cout<<"subtraction of two number "<<sub(a,b)<<endl;
    cout<<"multiplication of two number "<<mul(a,b)<<endl;
    cout<<"division of two number "<<division(a,b)<<endl;
    cout<<"modulus of two number "<<mod(a,b)<<endl;
    return 0;
}