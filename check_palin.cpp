#include<iostream>
using namespace std;
int reverse(int n){
    int num=0;
    while(n>0){
        num = (num*10)+n%10;
        n/=10;
    }
    return num;
}
bool check_palin(int n){
    if(n<0)return false;
    int num= reverse(n);
    if(n==num)return true;
    return false;
}
int main(){
    int n= 35653;
    cout << check_palin(n);
    return 0;
}