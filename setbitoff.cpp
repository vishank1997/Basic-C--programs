#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int num,k;
    cin>>num>>k;
    int bm = 1 << k;
    if((bm&num)>0){
        cout<<"bit is on"<<endl;
        int x = num ^ bm;
        cout<< x;
    }
    else{
        cout<<"bit is off";
    }
}