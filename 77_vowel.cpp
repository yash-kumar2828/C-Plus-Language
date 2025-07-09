#include<iostream>
using namespace std;
int main(){
    string s="my name is yash kumar";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    cout<<"the number of vowel is="<<count;
    return 0;
}