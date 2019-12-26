#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int n,count;
    cin>> n;
    int stars = 1;
    int spaces = n/2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }
        int temp;
        if(i>n/2){
            temp = n+1-i;
        }
        else{
            temp=i;
        }

        for(int k=1; k<=stars; k++){
            cout<<temp;
            if(k>stars/2){
                temp--;
            }
            else{
                temp++;
            }
        }
        if(i>n/2){
            spaces++;
            stars = stars-2;
        }
        else{
            spaces--;
            stars = stars+2;
        }
        
        cout<<endl;
    }
}