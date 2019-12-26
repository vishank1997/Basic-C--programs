#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int num;
    int k;
    cin >> num;
    cin >> k;
    int bm = 1 << k;
    if((bm&k)==0){
        cout<< "bit is off"<<endl;
        num = num | bm;
        cout<<num;
    }
    else{
        cout<<" bit is on";
    }
}