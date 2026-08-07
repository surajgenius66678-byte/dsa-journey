#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;
bool isAlphanumeric(char a){
    if((a>='0' && a<='9')||(tolower(a)>='a'&& tolower(a)<='z')){
        return true;
    }
    return false;
}
bool palindrome(string str){
    int st=0,end=str.length()-1;
    while(st<end){
        if(!isAlphanumeric(str[st])){
            st++;
            continue;
        }
        if(!isalnum(str[end])){
            end--;
            continue;
        }
        if(tolower(str[st])!=tolower(str[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string str = "suraj";
    cout << palindrome(str);
    return 0;
}