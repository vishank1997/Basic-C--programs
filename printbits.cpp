#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int num,count = 0,a=31,k;
    cin>>num;
    while (a>=0){
        k = 1<<a;
        if((k&num) == 0){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
        a--;
    }
}