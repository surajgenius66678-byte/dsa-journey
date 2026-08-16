#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subarraysum(vector<int> &arr,int target){
    int count=0;
    int n=arr.size();
    vector <int>prefix(n,0);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    unordered_map<int,int> m;
    m[0]=1;
    for(int j=0;j<n;j++){
        
        int val=prefix[j]-target;
        if(m.find(val)!=m.end()){
            count+=m[val];
        }
        m[prefix[j]]++;
    }
    return count;
}
int main(){
    vector<int>arr={9,4,0,20,3,10,5};
    int target=33;
    cout << subarraysum(arr,target);
}
