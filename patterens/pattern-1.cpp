#include<iostream>


using namespace std;


//Print solid pattern row and col
//* * * *
//* * * *
//* * * *
//* * * *
void SolidPattern(int r,int c){
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//Solid pattern
int main(){
    int r = 4;
    int c = 6;
    SolidPattern(r,c);




    // int n;
    // if (cin>>n){
    //     cout<<"you got : "<<n<<endl;
    // }
    // else{
    //     cout<<"i'm broke"<<endl;
    // }
}