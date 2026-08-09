#include<iostream>
using namespace std;
pair<int,int> find(int arr[][3],int key,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==key){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int key=8;
    int row=4;
    int col=3;
    cout << find(arr,key,row,col).first << find(arr,key,row,col).second;
    return 0;
    }