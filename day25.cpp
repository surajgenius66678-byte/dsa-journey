#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,0,2,1,1,0};
    int mid=0,low=0,high=5;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int i=0;i<6;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}