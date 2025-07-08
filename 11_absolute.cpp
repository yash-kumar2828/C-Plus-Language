#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number=";
    cin>>n;
    if(n<0){
        cout<<"the absolute number is "<<-n;
    }else{
        cout<<"the absolute number is "<<n;
    }
    return 0;
}