#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"enter a number=";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum 0f natural number "<<sum;
    return 0;
}