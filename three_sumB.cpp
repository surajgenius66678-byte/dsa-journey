#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> sum0(vector<int>vec){
    vector<vector<int>> ans;
    set<vector<int>> s;
    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(vec[i]+vec[j]+vec[k]==0){
                    vector<int>t={vec[i],vec[j],vec[k]};
                    sort(t.begin(),t.end());
                    if(s.find(t)==s.end()){
                        s.insert(t);
                        ans.push_back(t);
                    }
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int>vec={-1,0,1,2,-1,-4};
    vector<vector<int>>as=sum0(vec);
    for(int i=0;i<as.size();i++){
        for(int j=0;j<as[1].size();j++){
            cout<< as[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}