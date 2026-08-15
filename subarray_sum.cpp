#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int>arr,int tar){
    int count =0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum =arr[i];
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum==tar){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int>arr={9,4,20,3,10,5};
    int target=33;
    return 0;
}