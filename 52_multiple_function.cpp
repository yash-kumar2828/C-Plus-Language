#include<iostream>
using namespace std;
void usa(){
    cout<<"you are in USA"<<endl;
    return;
}
void india(){
    cout<<"you are in INDIA"<<endl;
    usa();
    return;
}

int main(){
    india();
    cout<<"you are main"<<endl;
    return 0;
}