#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int num,count = 0;
    cin>>num;
    int k = 1;
    while(num != 0){
    k = (num&-(num));
    num = num - k;
    count++;
    }
    cout<< count;
}
