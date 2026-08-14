#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<vector<int>>sum(vector<int>arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1])continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && arr[j]==arr[j-1])continue;
            int p=j+1;int q=n-1;
            while(p<q){
                long long sum=(long long)arr[i]+(long long)arr[j]+(long long)arr[p]+(long long)arr[q];
                if(sum>0){
                    q--;
                }else if(sum<0){
                    p++;
                }else{
                    ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                    p++;q--;
                    while(p<q && arr[p]==arr[p-1]){
                        p++;
                    }
                }
            }
        }
    }
    return ans;

}
int main(){
    vector<int>arr={-2,-1,-1,1,1,2,2};
    vector<vector<int>>as=sum(arr);
    for(int i=0;i<as.size();i++){
        for(int j=0;j<as[1].size();j++){
            cout<< as[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}