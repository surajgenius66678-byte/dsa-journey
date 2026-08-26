#include<iostream>
#include<vector>
using namespace std;
int count(vector<int>&arr){
    int total=0;
    for(int i=0;i<arr.size();i++){
        int st=arr[i];
        
        for(int j=i+1;j<arr.size();j++){
            if(st>arr[j]){
                total++;
            }
        }
    }
    return total;
}
int main(){
    vector<int>arr={6,3,5,2,7};
    cout<<count(arr);
    return 0;
}