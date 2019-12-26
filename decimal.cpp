#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int dec = 0;
    int bin = 0;
    int x,k=1;
    int count = 0;
    cin>> bin;
    while(bin !=0){
        x = bin%10;
        bin = bin/10;
        dec = dec+x*k;
        k = k * 2;
    }
    cout<<dec;
}