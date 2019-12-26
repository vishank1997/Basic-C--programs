#include<iostream>
using namespace std;

int main(){
    int arr[] = {-40,-50,-70,-90,-2,-33,-14,-61};
    int max = arr[0];
    int a;
    for(int i = 0; i < 8; i++){
        a = arr[i];
        if(a > max){
            max = a;
        }
    }
    cout<<max;
}