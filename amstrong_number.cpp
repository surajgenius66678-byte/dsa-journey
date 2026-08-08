#include<iostream>
using namespace std;
 bool checkA(int n){
    int cpy=n;
    int sum=0;
    while(n>0){
        sum+=((n%10)*(n%10)*(n%10));
        n/=10;
    }
    if(sum==cpy){return true;}
    return false;
}
int main(){
    int n=153;
    cout<< checkA(n);
    return 0;
}