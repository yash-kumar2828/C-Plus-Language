#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number=";
    cin>>num;
    if(num<0){
        cout<<num<<" is a negative number";
    }else{
        cout<<num<<" is a positive number";
    }
    return 0;
}