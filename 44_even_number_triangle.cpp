#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of row=";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}