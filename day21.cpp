#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int>arr,int n,int cow, int largestMinDist){
    int cows=1,lastindex= arr[0];
    for(int i =1 ;i<n;i++){
        if(arr[i]-lastindex >=largestMinDist){
            cows++;
            lastindex=arr[i];
        }else{
            continue;
        }
    }
    return cows>=cow ? true:false;
}
int minDistance(vector<int>arr,int n,int cows){
   sort(arr.begin(),arr.end());
    int start= 1,end=arr[n-1]-arr[0] , ans=-1 ;
    while(start<=end){
        int mid=(start+(end-start)/2);
        if(isPossible(arr,n,cows,mid)){
            ans= mid;
            start=mid+1;
        }else{
            end= mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr= {1,2,8,4,9};
    int n= arr.size();
    int cows= 3;
    cout << minDistance(arr,n,cows);
    return 0;
}