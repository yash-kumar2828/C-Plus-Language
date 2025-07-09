#include<iostream>
using namespace std;
int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int ncr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int num;
    cout<<"enter n=";
    cin>>num;
    for(int i=0;i<=num;i++){
         for(int k=1;k<=num-i+1;k++){
            cout<<" ";
         }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}