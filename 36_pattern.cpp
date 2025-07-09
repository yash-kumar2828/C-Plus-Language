#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row value=";
    cin>>r;
    cout<<"enter column value=";
    cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}