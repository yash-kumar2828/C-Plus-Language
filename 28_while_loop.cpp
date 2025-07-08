#include<iostream>
using namespace std;
int main(){
    int num,table,i=1;
    cout<<"enter a number=";
    cin>>num;
    cout<<"the table of "<<num<<endl;
    while(i<=10){
        table=num*i;
        cout<<num<<"*"<<i<<"="<<table<<endl;
        i+=1;
    }
    return 0;
}