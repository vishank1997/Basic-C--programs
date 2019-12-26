#include<iostream>
using namespace std;
int main(int argc, char** argv){

    int n,count,spaces=1;
    cin>>n;
    int temp = 2*n-1;
    for(int i=1; i<=n; i++){
        count = 1;
        temp = temp-2;
        for(int j=1; j<=i; j++){
            
            cout<<count++;
        }
        for(int x=1; x<=temp;x++){
            cout<<".";    
        }
        int j=1;
        if(temp<0){
                count = count-1;
                j=2;
            }
        for(j; j<=i; j++){
            
            cout<<--count;
        }
    
       
        
        cout<<endl;
    }
}