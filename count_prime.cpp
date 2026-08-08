#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int prime_count(int n){
    vector<bool>countp(n+1,true);
    int count =0;
    for(int i=2;i<n;i++){
        if(countp[i]){
            count++;
            for(int j=i*2;j<n;j=j+i){
                countp[j]=false;
            }
        }
    }
    return count;

}
int main(){
    int n=50;
   cout<< prime_count(n);

    return 0;

}