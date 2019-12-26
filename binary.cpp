#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int dec = 0;
    int bin = 0;
    int x,k=1;
    int count = 0;
    cin>> dec;
    while(dec != 0){
        x = dec%2;
        dec = dec/2;
        bin = bin + x * k;
        k = k * 10;
    }
    cout<< bin;
}