#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number=";
    cin>>num;
    if(num%5==0 || num%3==0){
        cout<<num<<" is a divisible by 5 or 3";
    }else{
        cout<<num<<" is not a divisible by 5 or 3";
    }
    return 0;
}