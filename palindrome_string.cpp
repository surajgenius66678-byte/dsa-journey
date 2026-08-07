#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string palin = "acdcba";
    string palin1 = palin;
    reverse(palin1.begin(),palin1.end());
    if(palin==palin1){
        cout<< "string is a palindrome";

    }else{
        cout<< "string is not a palindrome";
    }
    return 0;
}