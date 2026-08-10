#include<iostream>
#include<vector>
using namespace std;
bool searchmat(vector<vector<int>> mat ,int target){
    int n=mat.size();
    int m=mat[0].size();
    int row=0,col=m-1;
    while(col >= 0 && row <n){
        if(target==mat[row][col]){
            return true;
        }else if(target < mat[row][col]){
            col--;
        }else{
            row++;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> mat={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target =  5;
    cout << searchmat(mat,target);
    return 0;
}