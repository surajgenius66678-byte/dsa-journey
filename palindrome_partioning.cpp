#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool isPalin(string s1){
    string s2=s1;
    reverse(s2.begin(),s2.end());
    return s1==s2;
}
    void getallpalin(string s,vector<vector<string>> &ans,vector<string> &partition){
        if(s.size()==0){
            ans.push_back(partition);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(isPalin(part)){
                partition.push_back(part);
                getallpalin(s.substr(i+1),ans,partition);
                partition.pop_back();
            }
        }
        return;
    }
int main(){
    string random="aab";
    vector<vector<string>> ans;
    vector<string> a;
    getallpalin(random,ans,a);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}
