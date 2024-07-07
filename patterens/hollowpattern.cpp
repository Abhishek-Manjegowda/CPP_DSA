#include<iostream>


using namespace std;


//Print solid pattern row and col
//* * * *
//*     *
//*     *
//* * * *
void HollowPattern(int r,int c){
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if (i ==0 || i ==r-1){
                cout<<"* ";
            }
            else{
                if (j==0 || j==c-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}

int main(){
    int r = 4;
    int c = 6;
    HollowPattern(r,c);
}