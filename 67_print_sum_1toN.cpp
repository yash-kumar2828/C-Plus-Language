#include<iostream>
using namespace std;
int sum(int num){
   if(num==1){
    return 1;
   }else{
    return num+sum(num-1);
   }
}
int main(){
    int num;
    cout<<"enter a number=";
    cin>>num;
    cout<<"sum of 1 to "<<num<<" is "<<sum(num);
    return 0;
}