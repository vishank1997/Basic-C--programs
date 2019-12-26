#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int arr[] = {4,2,0,1,3};
    int n = sizeof(arr) / sizeof(int);
    int inv[n],i;
    for(i = 0; i<n; i++){
        inv[arr[i]]= i;
    }
    for (i=0; i<n;i++){
        cout<<inv[i];
    }
}