#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int finddup(vector<int>arr){
    unordered_set<int>s;
    for(int val:arr){
        if(s.find(val)!=s.end()){
            return val;
        }
        s.insert(val);

    }
    return -1;
}
int main(){
    vector<int> arr={3,1,5,2,4,3};
    cout<<finddup(arr);
    return 0;
}