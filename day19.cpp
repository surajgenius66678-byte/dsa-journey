#include<iostream>
#include<vector>
using namespace std;
bool checkValid(vector<int>arr,int n,int m,int maxpage){
    int students=1,page=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxpage){
            return false;
        }
        if(page+arr[i]<=maxpage){
            page += arr[i];
        }else{
            students ++;
            page=arr[i];
        }
    }
    return students>m?false:true;
}
int maxpages(vector<int>arr,int n,int m){
    if(m>n){
        return -1 ;
    }
    int sum=0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    int start=0,end=sum;
    int ans=-1;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(checkValid(arr,n,m,mid)){
            ans= mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    vector <int> arr ={2,1,3,4};
    int n = arr.size();
    int m=2;
    cout << maxpages(arr,n,m);
}