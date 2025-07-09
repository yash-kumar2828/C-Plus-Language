#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/4;
    int sum_even=0,sum_odd=0;
    for(int i=1;i<n;i++){
        if(arr[i]%2==0){
         sum_even=sum_even+arr[i];
        }
    }
    cout<<"sum of even number="<<sum_even;
    return 0;
}