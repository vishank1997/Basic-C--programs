#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int dec = 0;
    int oct = 0;
    int x,k=1;
    int count = 0;
    cin>> oct;
    while(oct !=0){
        x = oct%10;
        oct = oct/10;
        dec = dec+x*k;
        k = k * 8;
    }
    cout<<dec;
}