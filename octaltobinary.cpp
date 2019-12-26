#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int bin = 0;
    int oct = 0;
    int a,x=0,k=1;
    int count= 0;
    cin>>oct;
    while(oct != 0){
        a = oct % 10;
         switch(a){
        case 0:
            count = 0;
            break;
        case 1:
            count = 1;
            break;
        case 2:
            count = 10;
            break;
        case 3:
            count = 11;
            break;
        case 4:
            count = 100;
            break;
        case 5:
            count = 101;
            break;
        case 6:
            count = 110;
            break;
        case 7:
            count = 111;
            break;
        default :
            break;
        }
        oct = oct/10;
        x = x + count * k;
        k = k * 1000;
    }
    cout << x;
}