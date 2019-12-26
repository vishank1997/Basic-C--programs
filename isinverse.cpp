#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int arr[] = {2,3,0,4,1};
    int n = sizeof(arr) / sizeof(int);
    int flag,i;
    flag = 1;
    for(i = 0; i<n; i++){
        if(i!=arr[arr[i]]){
            flag = 0;
        }
    }
    if(flag==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}