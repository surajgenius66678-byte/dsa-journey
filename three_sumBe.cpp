#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
vector<vector<int>> sum0(vector<int>vec){
    int n=vec.size();
    set<vector<int>>unique;
    for(int i=0;i<n;i++){
        int first=-vec[i];
        set<int>s;
        for(int j=i+1;j<n;j++){
            int third=first-vec[j];
            if(s.find(third)!=s.end()){
                vector<int>trip={vec[i],vec[j],third};
                sort(trip.begin(),trip.end());
                unique.insert(trip);
            }
            s.insert(vec[j]);
        }
    }
    vector<vector<int>> ans={unique.begin(),unique.end()};
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