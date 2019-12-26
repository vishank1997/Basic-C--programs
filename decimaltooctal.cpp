#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int dec = 0;
    int oct = 0;
    int x,k=1;
    int count = 0;
    cin>> dec;
    while(dec !=0){
        x = dec%8;
        dec = dec/8;
        oct = oct+x*k;
        k = k * 10;
    }
    cout<<oct;
}