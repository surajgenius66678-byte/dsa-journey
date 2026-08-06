#include<iostream>
using namespace std;
int maxsum(int arr[],int n){
    if(n<3){
        return -1;
    }
    int sum=arr[0]+arr[1]+arr[2],maxsum=arr[0]+arr[1]+arr[2];
    for(int i=1;i<n-2;i++){
         sum +=arr[i+2]-arr[i-1];
        if(sum>maxsum){
            maxsum=sum;
        }
    }
    return maxsum;
}
int main(){
    int arr[]={2, 1, 5, 1, 3, 2};
    int size=sizeof(arr)/4;
    int sum=maxsum(arr,size);
    cout << sum;
    return 0;
}