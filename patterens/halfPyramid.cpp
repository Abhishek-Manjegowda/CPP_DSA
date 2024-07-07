#include<iostream>

using namespace std;

void halfPyramid(int r, int c){
    for (int i=0;i<r;i++){
        int j=0;
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        // for(int k=j;k<c;k++){
        //     cout<<" ";
        // }
        cout<<endl;
    }
}

void InvHalfPyramid(int r, int c){
    for (int i=0;i<r;i++){
        int j=0;
        for(j=0;j<=c-1-i;j++){
            cout<<"* ";
        }
        // for(int k=j;k<c;k++){
        //     cout<<" ";
        // }
        cout<<endl;
    }
}


int main(){
    int r = 6;
    int c =6;

   // halfPyramid(r,c);
   InvHalfPyramid(r,c);
}