#include<iostream>
using namespace std;
int main(){
    int num,table,i=1;
    cout<<"enter a number=";
    cin>>num;
    cout<<"the table of "<<num<<endl;
    do{
        table=num*i;
        cout<<num<<"*"<<i<<"="<<table<<endl;
        i+=1;
    }while(i<=10);
    return 0;
}