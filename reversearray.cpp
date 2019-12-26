#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(int argc, char** argv){
    int arr[] = {2,5,7,9,1,3};
    int n = sizeof(arr)/sizeof(int);
    int temp;
    int start;
    int end;
    cin >> start >> end;
    int A = (start+end)/2+1;
    while(A--){
        temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
     }
    for(int i= 0; i< n; i++){
        cout<<arr[i];
    }
}