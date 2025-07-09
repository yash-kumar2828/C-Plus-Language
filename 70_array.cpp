#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"enter five marks="<<endl;
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
    cout<<"your five subject marks are="<<endl;
    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }
    int per,sum=0;
     for(int i=0;i<5;i++){
        sum=sum+marks[i];
    }
    cout<<"the total marks is="<<sum<<endl;
    per=sum/5;
    cout<<"the total percentage of marks are "<<per;
    return 0;
}