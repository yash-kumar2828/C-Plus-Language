#include<iostream>
using namespace std;
void greet(){
    cout<<"good morning"<<endl;
    cout<<"how are you?"<<endl;
    return;
}
int main(){
    greet();
    cout<<"hey"<<endl;
    greet();
    return 0;
}