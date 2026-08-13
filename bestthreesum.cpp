#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> sum0(vector<int>vec){
    vector<vector<int>> ans;
int n=vec.size();
for (int i=0;i<n;i++){
    if(i>0 && vec[i]==vec[i-1]) continue;
    int j=i+1,k=n-1;
    while(j<k){
        int sum=vec[i]+vec[j]+vec[k];
        if(sum>0){
            k--;
        }else if(sum<0){
            j++;
        }else{
            ans.push_back({vec[i],vec[j],vec[k]});
            j++;k--;
            while(j<k && vec[j]==vec[j-1]){
                j++;
            }
        }
    }
}
return ans;
}

int main(){
    vector<int>vec={-1,0,1,2,-1,-4};
    sort(vec.begin(),vec.end());
    vector<vector<int>>as=sum0(vec);
    for(int i=0;i<as.size();i++){
        for(int j=0;j<as[1].size();j++){
            cout<< as[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}