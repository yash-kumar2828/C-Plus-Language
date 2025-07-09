#include<iostream>
using namespace std;
void print(int x,int n){
    if(x>n){
        return;
    }else{
        cout<<x<<endl;
        return print(x+1,n);
    }
}
int main(){
    int num;
    cout<<"enter n terms=";
    cin>>num;
    print(1,num);
    return 0;
}