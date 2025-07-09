#include<iostream>
using namespace std;
int fact(int num){
   if(num==0 || num==1){
    return 1;
   }else{
    return num*fact(num-1);
   }
}
int main(){
    int num;
    cout<<"enter a number=";
    cin>>num;
    cout<<"factorial of "<<num<<" is "<<fact(num);
    return 0;
}