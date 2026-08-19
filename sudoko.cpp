#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
bool isValid(vector<vector<char>>&board,int row,int col,int n,int num){
    for(int i=0;i<n;i++){
       if( board[i][col]==num+'0')
        {return false;}
    }
    for(int j=0;j<n;j++){
       if( board[row][j]==num+'0'){
           return false;
    }
    
    }
    int p = sqrt(n);
    for(int i=row-(row%p);i<(row-(row%p))+p;i++){
        for(int j=col-(col%p);j<(col-(col%p))+p;j++){
           if( board[i][j]=='0'+num){
            return false;
           }
        }
    }
    return true;
}
bool sudoko(vector<vector<char>> &board,int col,int row,int n){
    if(row==9){return true;}
    if(col==9){
        row++;
        col=0;
        return sudoko(board,col,row,n);
    }
  
        if(board[row][col]!='.'){
         return sudoko(board,col+1,row,n);
        }
        for(int j=1;j<n+1;j++){
            if(isValid(board,row,col,n,j)){
                board[row][col]='0'+j;
                if(sudoko(board,col+1,row,n)){return true;}
                board[row][col]='.';
            }
        }
    
    return false;
}
int main(){
vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}};
    int n=9;
    sudoko(board,0,0,n);
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}