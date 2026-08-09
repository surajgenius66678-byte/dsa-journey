#include<iostream>
using namespace std;
 int diagonalsum(int arr[][3],int n){
     int sum=0;
    if(n%2==0){
        for(int i=0;i<n;i++){
            sum+=arr[i][i];
        }
        for(int i=0;i<n;i++){
            sum+=arr[i][n-i-1];
        }
    }else{
        for(int i=0;i<n;i++){
            sum+=arr[i][i];
        }
        for(int i=0;i<n;i++){
            sum+=arr[i][n-i-1];
        }
        sum=sum-arr[(n-1)/2][(n-1)/2];
    }
    return sum;
 }
 int dia(int arr[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][j];
            }else if(j==n-i-1){
                sum+=arr[i][j];
            }
        }
    }
    return sum;
 }
int main(){
   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int n=3;
   cout<<diagonalsum(arr,n)<< endl;
   cout<<dia(arr,n);

    return 0;
}