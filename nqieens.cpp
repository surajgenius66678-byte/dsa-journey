#include<iostream>
#include<vector>
using namespace std;
bool isSafe(vector<string>&board,int row,int col,int n){
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;j>=0&&i>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;j<n&&i>=0;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
vector<vector<string>> nqueens(vector<string>&board,vector<vector<string>>&ans,int n,int row){
    if(row==n){
        ans.push_back({board});
        return;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board,row,j,n)){
            board[row][j]='Q';
            nqueens(board,ans,n,row+1);
            board[row][j]='.';
        }
    }
    return ans;
}
int main(){
    int n=4;
    vector<string>board (n,string(n,'.'));
    vector<vector<string>>ans;
    nqueens(board,ans,n,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}