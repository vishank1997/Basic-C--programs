#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int arr[] = {1,3,3,3,4,5,5,5,6,6,6,7,8,12,21,34};
    int a,ans = -1;
    cin>>a;
    int low = 0;
    int high = 9;
    int mid = (low + high)/2;
    while(high >= low){
        if(arr[mid] == a){
            ans = mid;
            high = mid - 1;

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
    cout<< ans;

}