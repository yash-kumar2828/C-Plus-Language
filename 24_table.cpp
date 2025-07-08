#include<iostream>
using namespace std;
int main(){
    int num,table,i;
    cout<<"enter a number=";
    cin>>num;
    cout<<"the table of "<<num<<endl;
    for(i=1;i<=10;i++){
        table=num*i;
        cout<<num<<"*"<<i<<"="<<table<<endl;
    }
    return 0;
}