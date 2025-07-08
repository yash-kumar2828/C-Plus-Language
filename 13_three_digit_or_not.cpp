#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number=";
    cin>>num;
    if(num>99 && num<1000){
        cout<<num<<" is a three digit number";
    }else{
        cout<<num<<" is not a three digit number";
    }
    return 0;
}