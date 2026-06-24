// // Pair Sum- we have sorted array and we have target sum 
// // Brute force
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int arr[4]={2,7,11,15};
//     vector <int> vec = {};
//     int n=4;
//     int target=9;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 cout << "index ="<< i << j<<"\n";
//                 vec.push_back(arr[i]);
//                 vec.push_back(arr[j]);
//             }
//         }
//     }
//     for(int val :vec){
//         cout << val;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector <int> pairsum(vector <int>vec,int target,int n){
//     int i=0,j=n-1;
//     vector <int> ans;
//     while(i<j){
//         int pair_sum=vec[i]+vec[j];
//         if(pair_sum > target){
//             j--;
//         }else if(pair_sum < target){
//             i++;
//         }else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }
// int main (){
//     int target = 18;
//     vector <int> vec = {2,7,11,15};
//     int n= vec.size();
//     vector <int> ans=pairsum(vec,target,n);
//     cout << ans[0] << ","<<ans[1];
//     return 0;
// }/

//  #include <iostream>
//  #include<vector>
//  using namespace std;
//  vector<int> maxelement(vector <int> vec ,int n){
//     int count =0;
//     vector<int>ans;
//     for(int val:vec){
//         for(int num:vec){
//             if(val==num){
//                 count++;
//             }
//         }
//         if (count > n/2){
//             ans.push_back(val);
//             return ans;
//         }
//     }
//     return ans;
//  }
//  int main (){
//     vector<int> vec={1,2,2,2,1};
//     int n= vec.size();
//     vector <int> ans= maxelement(vec,n);
//     cout << ans[0];
//     return 0;
//  }


// #include<iostream>
// #include<vector>
// # include <algorithm>
// using namespace std;
// int majority(vector <int> vec){
//     int ans=vec[0];
//     int freq=1;
//     for(int i=1;i<vec.size();i++){
//         if(ans==vec[i]){
//             freq++;
//         }else{
//             freq = 1;
//             ans= vec[i];
//         }
//         if(freq>vec.size()/2){
//             return ans;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector <int> vec = {0,2,1,2,2,0,2,1,2};
//     sort(vec.begin(),vec.end());
//     int n =majority(vec);
//     cout << n;
//     return 0;
// }

// Moore's Voting Algorithm
#include <iostream>
#include<vector>
using namespace std;
int majoritelem (vector <int> vec){
    int freq=0,ans=0;
    for(int i =0;i<vec.size();i++){
        if(freq==0){
            ans=vec[i];
        }
        if(ans==vec[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int>vec={1,2,2,1,1,1};
    int n = majoritelem(vec);
    cout << n;
    return 0;
}