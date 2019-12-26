#include<iostream>
using namespace std;

int main(int argc, char** argv){
    char c;
    cin >> c;
    if(c >= 'A' && c<= 'Z'){
        cout<<"upper case";
        char lc = c - 'A' +'a'; 
        cout<<(char)lc;
    }
    else if( c>='a' && c <= 'z' ){
        cout<<"lower case";
        char uc = 'A'+ c - 'a';
        cout<<(char)uc;
    }
    else{
        cout<<"invalid";
    }
}