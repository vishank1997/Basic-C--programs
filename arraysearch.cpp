#include<iostream>
using namespace std;

int main(){
    int arr[] = {40,50,70,90,2,33,-14,61};
    int a;
    cin >> a;
    for(int i = 0; i < 8; i++){
        if(a == arr[i]){
            cout<< i;
        }
    }
}