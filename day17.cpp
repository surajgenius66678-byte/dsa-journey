#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int>arr){
    int start =1,end=arr.size()-2;
    while(start<=end){
       int  mid=start + (end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid-1]<arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={0,3,8,9,5,2};
    cout << peak(arr);
    return 0;
}