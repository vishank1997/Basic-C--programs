#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int arr[] = {2,3,5,1,4,0};
    int temp = 0;
    int n = sizeof(arr) / sizeof(int);

    for(int i=0; i<n-1; i++){
        for(int j =0; j<n-i;j++){
            if(arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
}