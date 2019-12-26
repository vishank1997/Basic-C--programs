#include<iostream>
using namespace std;
//seen
int main(int argc, char** argv){
    int n,count;
    cin>> n;
    for(int i=0; i<=n; i++){
        count = 1;
        for(int c=0; c<=i; c++){
            cout<<count;
            count = (count*(i-c))/(c+1);
        }
        cout<<endl;
    }
}