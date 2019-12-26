#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int arr[] = {2,3,5,2,3,5,6};
    int sum=0;
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        sum = sum^arr[i];
    }
    cout<<sum;
}