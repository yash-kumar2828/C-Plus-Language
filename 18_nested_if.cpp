#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter first number=";
    cin>>n1;
    cout<<"enter second number=";
    cin>>n2;
    cout<<"enter third number=";
    cin>>n3;
    // if(n1>n2 && n1>n3){
    //     cout<<n1<<" is a greatest number";
    // }else if(n2>n1 && n2>n3){
    //     cout<<n2<<" is a greatest number";
    // }else{
    //     cout<<n3<<" is a greatest number";
    // }

    if(n1>n2){
        if(n1>n3){
            cout<<n1<<" is a greatest number";
        }else{
            cout<<n3<<" is a greatest number";
        }
    }else{
        if(n2>n3){
            cout<<n2<<" is a greatest number";
        }else{
            cout<<n3<<" is a greatest number";
        }
    }
    return 0;
}