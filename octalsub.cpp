#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int oct1,oct2,x1,x2,a,b;
    int pow =1;
    int sum =0;
    int flag  = 0;
    cin>>oct1>>oct2;
    while(oct1 != 0){
        x1 = oct1 % 10;
        oct1 = oct1/10;
        x2 = oct2 % 10;
        oct2 = oct2/10;
        if (flag == 1){
            x1--;
            flag = 0;
        }
        //if(x1 < 0){
        //    flag = 1;
            //cout<<"chal raha hai";
        //}
        if(x1<x2){
            a = x1-x2 + 8;
            flag = 1;
        }
        else{
            a = x1 - x2;
        }
        sum = sum + a * pow;
        pow = pow * 10;
    }
    cout<<sum;
}