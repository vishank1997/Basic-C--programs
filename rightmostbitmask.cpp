#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int num;
    cin>>num;
    int k = (num&-(num));
    cout<<k;
}