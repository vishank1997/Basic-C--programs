#include<iostream>
using namespace std;
//seen
int main(int argc, char** argv){
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((j==i) || (j+i)==(n-1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}