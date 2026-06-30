// #include<iostream>
// #include<vector>
// using namespace std;
// int binarysearch(vector<int>nums,int target){
    // int start =0;
    // int n =nums.size();
    // int end=n-1;
    // while(start<=end){
    //     int mid = start+((end-start)/2);
    //     if(target==nums[mid]){
    //         return mid;
    //     }else if(target < nums[mid]){
    //         end=mid-1;
    //     }else{
    //         start = mid+1;
    //     }
    // }
    // return -1;
// }
// int main(){
//     vector<int>arr1={-1,0,3,4,5,9,12};
//     int target= 12;
//     cout<< binarysearch(arr1,target);
//     vector<int>arr2={-1,0,3,5,9,12};
//     int target1= 0;
//     cout<< binarysearch(arr2,target1);

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>arr,int target,int start,int end){
    int mid= start+(end-start)/2;
    if(start<=end){
        if(target< arr[mid])  
        {end=mid-1;
            return   binarysearch(arr,target,start,end);
    }
        else if(target > arr[mid])  
        {start=mid+1;
            return   binarysearch(arr,target,start,end);
    }
        else {return mid ;}
}
    return -1;
}
int main(){
    vector<int>arr1={-1,0,3,4,5,9,12};
    int target= 12;
    cout<< binarysearch(arr1,target,0,arr1.size()-1);
    vector<int>arr2={-1,0,3,5,9,12};
    int target1= 0;
    cout<< binarysearch(arr2,target1,0,arr2.size()-1);

    return 0;
}