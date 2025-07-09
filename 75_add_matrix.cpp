#include<iostream>
using namespace std;
int main(){
    int mat1[3][3],mat2[3][3],mat3[3][3];
    cout<<"enter first matrix value="<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"your matrix is="<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter second matrix value="<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat2[i][j];
        }
    }
    cout<<"your matrix is="<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"addition two matrix is="<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}