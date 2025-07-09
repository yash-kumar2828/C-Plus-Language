#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,10,29,38,40,30};
    int n=sizeof(arr)/4;
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
         min=arr[i];
        }
    }
    cout<<"minimum value is "<< min;
    return 0;
}