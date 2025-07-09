#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter first number=";
    cin>>n1;
    cout<<"enter second number=";
    cin>>n2;
    cout<<"square root of "<<n1<<" is "<<sqrt(n1)<<endl;
    cout<<"square root of "<<n2<<" is "<<sqrt(n2)<<endl;
    cout<<"minimimum number is="<<min(n1,n2)<<endl;
    cout<<"maximum number is="<<max(n1,n2)<<endl;
    cout<<"power is "<<pow(n1,n2);
    return 0;
}