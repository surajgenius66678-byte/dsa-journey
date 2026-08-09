#include<iostream>
#include<climits>
using namespace std;
int reverse(int n){
    int num=0;
    while(n!=0){
        if(num>INT_MAX/10 || num<INT_MIN/10 )return 0;
        num=(num*10)+n%10;
        n/=10;
    }
    return num;
}
int main(){
    int n=-1123;

        cout << reverse(n);
    return 0;
}