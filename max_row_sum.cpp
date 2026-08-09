#include<iostream>
using namespace std;
int maxcsum(int arr[][3],int row,int col){
    int maxi=0;
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        maxi=max(maxi,sum);
    }
    return maxi;
}
int maxrsum(int arr[][3],int row,int col){
    int maxi=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        maxi=max(maxi,sum);
    }
    return maxi;
}

int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;
    cout << maxrsum(arr,row,col);
    cout << maxcsum(arr,row,col);
    return 0;
    }