#include<iostream>
using namespace std;
int main(){
    int x=3;
    int* p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<endl;
    float y=7.4;
    float* p1=&y;
    cout<<&y<<endl;
    cout<<p1<<endl;
    cout<<y<<endl;
    cout<<*p1<<endl;
    cout<<&p1<<endl;
    cout<<endl;
    char z='y';
    char* p2=&z;
     cout<<&z<<endl;
    cout<<p2<<endl;
    cout<<z<<endl;
    cout<<*p2<<endl;
    cout<<&p2<<endl;
    return 0;
}