#include<iostream>
using namespace std;
int main(){
    int fact=1,n;
    cout<<"enter a number=";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<<n<<" is "<<fact;
    return 0;
}