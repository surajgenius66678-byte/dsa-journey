#include<iostream>
#include<vector>
#include<set>

using namespace std;
set<vector<int>> s;
void helper(vector<int>&arr,vector<vector<int>>&ans,int target,int idx,vector<int>&combi){
    if(idx>=arr.size() || target<0){
        return;
    }
    if(target==0){
        if(s.find(combi)==s.end()){
        ans.push_back(combi);
        s.insert(combi);
        }
        return;
    }
    
    combi.push_back(arr[idx]);
    helper(arr,ans,target-arr[idx],idx+1,combi);
    helper(arr,ans,target-arr[idx],idx,combi);
    combi.pop_back();
    helper(arr,ans,target,idx+1,combi);
    return;

}
vector<vector<int>> combinationsum(vector<int>&arr,int target){
    vector<vector<int>>ans;
    vector<int>combi;
    helper(arr,ans,target,0,combi);
    return ans;
}
int main(){
    vector<int> arr={2,3,5};
    int target=8;
   vector<vector<int>>ans= combinationsum(arr,target);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}