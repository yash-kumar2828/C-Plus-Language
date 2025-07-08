#include<iostream>
using namespace std;
int main(){
    cout<<"even number 1 to 100\n";
    for(int i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}