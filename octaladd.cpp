#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int oct1,oct2,x1,x2,a,b;
    int pow =1;
    int sum =0;
    cin>>oct1>>oct2;
    //oct1 =7637;
    //oct2 = 577;
    while(oct1 != 0){
        x1 = oct1 % 10;
        oct1 = oct1/10;
        x2 = oct2 % 10;
        oct2 = oct2/10;
        a = x1+x2;
        if(a > 7){
        b = a - 8;
        oct1 ++;
        }
        else{
            b=a;
        }
        sum = sum + b * pow;
        pow = pow * 10;
    }
    cout<<sum;
}