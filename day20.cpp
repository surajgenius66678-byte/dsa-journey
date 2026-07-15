#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int>arr,int n,int m, int maxAllowedTime){
    int painter=1,time = 0;
    for(int i=0;i<n;i++){
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }else{
            painter ++;
            time= arr[i];
        }
    }
    return painter > m ? false:true ;
}
 int minTime(vector<int>arr,int n,int m){
    int sum =0, maxi = INT_MIN ;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        maxi = max(maxi,arr[i]);
    }
    int start = maxi , end = sum ,ans = -1;
    while(start <=end){
        int mid = start +(end-start)/2;
        if(isPossible(arr,n,m,mid)){
            ans= mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
 }
 int main(){
    vector<int>arr ={40,30,10,20};
    int n = arr.size();
    int m =2;
    cout << minTime(arr,n,m);
 }