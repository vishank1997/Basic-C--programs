#include<iostream>
using namespace std;
//seen
int main(int argc, char** argv){
    int n,count;
    cin>> n;
    int count1 = 0;
    int count2 = 1;
    int temp;
    for(int i=1; i<=n; i++){
        for(int c=1; c<=i; c++){
            cout<< count1<<" ";
            temp = count2+count1;
            count1=count2;
            count2=temp;
        }
        cout<<endl;
    }
}