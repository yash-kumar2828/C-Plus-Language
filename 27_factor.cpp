#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number=";
    cin>>num;
    cout<<"the factor of "<<num<<endl;
    for(int i=1;i<num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    for(int i=num/2;i>=1;i--){
        if(num%i==0){
            cout<<"the highest factor is "<<i;
            break;
        }
    }
    return 0;
}