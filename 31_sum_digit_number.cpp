#include<iostream>
using namespace std;
int main(){
    int n,count=0,sum=0,rem;
    cout<<"enter positive number=";
    cin>>n;
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    cout<<"the sum of digit is "<<sum;
    return 0;
}