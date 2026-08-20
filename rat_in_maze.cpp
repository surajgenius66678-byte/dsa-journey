#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>> &matrix,int row,int col,string path,vector<string>&ans){
    int n=matrix.size();
    if(row<0 || col<0|| row==n||col==n|| matrix[row][col]==0|| matrix[row][col]==-1){
        return;
    }
    if(row==n-1&&col==n-1){
        ans.push_back(path);
        return;
    }
    
    matrix[row][col]=-1;
        helper(matrix,row+1,col,path+"D",ans);
        helper(matrix,row-1,col,path+"U",ans);
        helper(matrix,row,col+1,path+"L",ans);
        helper(matrix,row,col-1,path+"R",ans);
    matrix[row][col]=1;

}
vector<string>path(vector<vector<int>> &matrix){
    vector<string>ans;
    string path="";
    helper(matrix,0,0,path,ans);
    return ans;
}
int main(){
    vector<vector<int>> board={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string>ans =path(board);
    
    for(int i=0;i<ans.size();i++){
        cout << ans[i]<<endl;
    }
    return 0;
}