#include<iostream>
#include<vector>
using namespace std;
bool searchrow(vector<vector<int>> mat,int target,int row){
    int n=mat[0].size();
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mat[row][mid]==target)return true;
        else if(mat[row][mid]>target)
        {
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>> mat,int target){
    int m=mat.size();
    int n=mat[0].size();
    int startrow = 0;
    int endrow = m-1;
    while (startrow <= endrow)
    {
        int midrow= startrow+(endrow-startrow)/2;
        if(mat[midrow][0]<=target && mat[midrow][n-1]>=target){
            return searchrow(mat,target,midrow);
        }else if(target >= mat[midrow][0]){
            startrow=midrow+1;
        }else{
            endrow= midrow-1;
        }
    }
    return false;
    
}
int main(){
    vector<vector <int>> mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=34;
    cout << searchMatrix(mat,target);
    return 0;
}