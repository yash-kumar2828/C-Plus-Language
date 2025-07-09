#include<iostream>
using namespace std;
void print(int num){
    if(num==0){
        return;
    }else{
        cout<<num<<endl;
        return print(num-1);
    }
}
int main(){
    int num;
    cout<<"enter n terms=";
    cin>>num;
    print(num);
    return 0;
}