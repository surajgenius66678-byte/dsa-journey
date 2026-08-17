#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(vector<int> &arr,vector<vector<int>>&ans,vector<int> num,int i){
    if(i==arr.size()){
        ans.push_back({num});
        return;
    }
    num.push_back(arr[i]);
    subset(arr,ans,num,i+1);

    num.pop_back();
    int idx=i+1;
    while(idx<arr.size() && arr[idx]==arr[idx-1]){
        idx++;
    }
    subset(arr,ans,num,idx);
    return;
}
int main(){
    vector<int> arr ={1,2,3};
    vector<vector<int>>ans;
    vector<int>num;
    sort(arr.begin(),arr.end());
    subset(arr,ans,num,0);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << ",";
    }
    return 0;
}