#include<iostream>
using namespace std;
//seen
int main(int argc, char** argv){
    int n,count;
    cin>> n;
    count = 1;
    for(int i=1; i<=n; i++){
        for(int c=1; c<=i; c++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}