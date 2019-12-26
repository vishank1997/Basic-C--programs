#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int arr[] = {1,3,4,5,6,7,8,12,21,34};
    int a;
    cin>>a;
    int low = 0;
    int high = 9;
    int mid = (low + high)/2;
    while(1){
        if(arr[mid] == a){
            cout<<mid;
            return;
        }
        else if(arr[mid] > a){
            high = mid-1;
            mid = (low + high)/2;
        }
        else{
            low = mid + 1;
            mid = (low + high)/2;

        }
    }
}