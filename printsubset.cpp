#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i< (1<<n); i++){
        for(int j = 0,b=n-1;b>=0;b--,j++){
            int bm = 1<<b;
            if((i&bm)== bm){
                cout<<arr[j]<<" ";
            }
            else{
                cout<<"**"<<" ";
            }
        }
        cout<<endl;
    }
}