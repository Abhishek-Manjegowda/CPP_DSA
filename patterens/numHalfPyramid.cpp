#include<iostream>


using namespace std;



void numHalfPyramid(int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<i+1;j++){
            cout<< j+1 <<" ";
        }
        cout<<endl;
    }
}

void InvNumHalfPyramid(int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<=c-1-i;j++){
            cout<< j+1 <<" ";
        }
        cout<<endl;
    }
}


int main(){
    int r=5;
    int c=5;
    numHalfPyramid(r,c);
    cout<<endl;
    cout<<endl;
    InvNumHalfPyramid(r,c);
}