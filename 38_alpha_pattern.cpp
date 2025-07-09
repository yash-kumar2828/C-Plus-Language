#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row value=";
    cin>>r;
    cout<<"enter column value=";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}