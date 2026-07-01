#include<iostream>
#include<vector>
using namespace std;
int single (vector<int>arr){
    if(arr.size()==1){return arr[0];}
    int start=0,end=arr.size()-1;
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(mid==0&&arr[mid]!=arr[mid+1]){return arr[mid];}
        if(mid==arr.size()-1&&arr[mid]!=arr[mid-1]){return arr[mid];}
        if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
       if(mid%2==0) {if(arr[mid]==arr[mid-1]){
            end=mid-1;
        }else{
            start=mid+1;
        }}else{
          if(arr[mid]==arr[mid-1]){
              start=mid+1;
        }else{
            end=mid-1;
        }  
        }
    }
    return -1;

}
int main(){
    vector<int>arr={1,1,2,2,3,3,4};
    cout << single(arr);
    return 0;
}