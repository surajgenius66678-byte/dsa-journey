#include<iostream>
#include<vector>
using namespace std;
bool nknights(vector<vector<int>>&arr,int r,int c,int n,int expected){
    if(r<0||c<0||r>=n||c>=n||arr[r][c]!=expected){
        return false;
    }
    if(arr[r][c]==(n*n)-1){
        return true;
    }
    bool ans1=nknights(arr,r-2,c+1,n,expected+1);
    bool ans2=nknights(arr,r-1,c+2,n,expected+1);
    bool ans3=nknights(arr,r+1,c+2,n,expected+1);
    bool ans4=nknights(arr,r+2,c+1,n,expected+1);
    bool ans5=nknights(arr,r+2,c-1,n,expected+1);
    bool ans6=nknights(arr,r+1,c-2,n,expected+1);
    bool ans7=nknights(arr,r-1,c-2,n,expected+1);
    bool ans8=nknights(arr,r-2,c-1,n,expected+1);

    return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
}
int main(){
    vector<vector<int>> arr={{0,3,6},{5,8,1},{2,7,4}};
    cout << nknights(arr,0,0,arr.size(),0);
    return 0;
}