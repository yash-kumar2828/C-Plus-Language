#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cost price=";
    cin>>cp;
    cout<<"enter selling price=";
    cin>>sp;
    if(cp<sp){
        cout<<"profit is "<<sp-cp;
    }else if(cp>sp){
        cout<<"loss is "<<cp-sp;
    }else{
        cout<<"no profit no loss";
    }
    return 0;
}