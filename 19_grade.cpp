#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter a marks=";
    cin>>marks;
    if(marks>=81 && marks<=100){
        cout<<"very good";
    }else if(marks>=61 && marks<=80){
        cout<<"good";
    }else if(marks>=41 && marks<=60){
        cout<<"average";
    }else if(marks<=40){
        cout<<"fail";
    }else{
        cout<<"invalid marks";
    }
    return 0;
}