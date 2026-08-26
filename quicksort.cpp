#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int pivotidx(vector<int>&arr,int s,int end){
    int pivot = arr[end];
    int idx=s-1;
    for(int j=s;j<arr.size();j++){
        if(arr[j]<pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}
void quicksort(vector<int>&arr,int s,int end){
    if(s<end){
        int idx=pivotidx(arr,s,end);
        quicksort(arr,s,idx-1);
        quicksort(arr,idx+1,end);
    }
}
int main(){
    vector<int>arr={12,31,35,8,32,17};
    quicksort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<< arr[i]<<"  ";
    }
}