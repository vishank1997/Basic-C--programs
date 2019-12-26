//kadance algo
#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int arr[] = {2,3,7,-9,6,7,-20,1,2,3};
    int n = sizeof(arr) / sizeof(int);
    int gsum,gi,ge;
    int lsum,li,le;
    lsum = li = le = ge = gi = gsum = 0;
    for(int i=0; i<n; i++){
        if(lsum <= 0){
            li = i;
            lsum = arr[i];
            le = i;
        }
        else{
            lsum = lsum + arr[i];
            le = i;
        }
        if(lsum>gsum){
            gsum = lsum;
            gi = li;
            ge = le;
        }
    }
    cout<<gsum<<" "<<gi<<" "<<ge;
}