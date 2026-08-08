#include<iostream>
using namespace std;
int gcd(int a , int b){
    if (b==0){
        return a;
    }
        return gcd(b,a%b);
    
}
int lcm(int a , int b){
    int l = gcd(a,b);
    return (a*b)/l;
}
int main(){
    int a=20,b=28;
    cout << gcd(a,b);
    cout << lcm(a,b);
    return 0;
}