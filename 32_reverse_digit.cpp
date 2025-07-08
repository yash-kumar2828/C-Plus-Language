#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem;
    cout<<"enter positive number=";
    cin>>n;
    while(n!=0){
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    cout<<"the reverse of digit  "<<rev;
    return 0;
}