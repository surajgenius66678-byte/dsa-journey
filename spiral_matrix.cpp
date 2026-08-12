#include<iostream>
#include<vector>
using namespace std;
vector<int>spiral(vector<vector<int>>mat){
    int m=mat.size();
    int n=mat[0].size();
    int srow=0,erow=m-1,scol=0,ecol=n-1;
    vector<int>arr;
    while(srow<=erow && scol<=ecol){
        //  top
        for(int j=scol;j<=ecol;j++){
            arr.push_back(mat[srow][j]);
        }
        //right
        for(int i=srow+1;i<=erow;i++){
            arr.push_back(mat[i][ecol]);
        } 
        // bottom
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){break;}

            arr.push_back(mat[erow][j]);
        }
        // left
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol){break;}

            arr.push_back(mat[i][scol]);
        }
        srow++;scol++;erow--;ecol--;
    }
    return arr;
}
int main(){
    vector<vector<int>> mat={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int val:spiral(mat)){
        cout << val << " ";
    }
}