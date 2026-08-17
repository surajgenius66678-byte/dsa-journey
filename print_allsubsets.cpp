#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<int>&arr,vector<int> &ans,int i){
    if(i == arr.size()){
        for(int val :ans){
            cout << val << " ";

        }
        cout << endl ;
        return;
    }
    // iclusion
    ans.push_back(arr[i]);
    subsets(arr,ans,i+1);

    ans.pop_back();
    // exclude
    subsets(arr,ans,i+1);

return ;
    
}
int main(){
    vector<int>arr={1,2,3,4};
    vector<int>ans;

    subsets(arr,ans,0);
    return 0;
}