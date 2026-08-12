#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int>dup(vector<vector <int>>arr ){
    unordered_set<int>s;
    vector<int>ans;
    int n= arr.size();
    int sum=0,a;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
            if(s.find(arr[i][j])!=s.end()){
                a=arr[i][j];
                ans.push_back(arr[i][j]);

            }
            s.insert(arr[i][j]);
        }
    }
    int exc=(n*n)*((n*n)+1)/2;
    int b=exc+a-sum;
    ans.push_back(b);
 return ans;
}
int main(){
    vector<vector <int>> arr={{9,1,7},{8,9,2},{3,4,6}};
    for(int val: dup(arr)){
        cout<< val;
    }
    return 0;
}