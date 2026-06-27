// #include <iostream>
// #include<vector>
// using namespace std;
// vector<int>Pro(vector<int> vec){
//     vector <int> ans ;
//     for(int i=0;i<vec.size();i++){
//         int ansr = 1;
//         for(int j=0;j<vec.size();j++){
//             if(i!=j){
//                 ansr=ansr*vec[j];
//             }
//         }
//         ans.push_back(ansr);
//     }
//     return ans ;
// }
// int main(){
//     vector<int> vec = {1,2,3,4};
//     vector <int> ans = Pro(vec);
//     for(int val : ans){
//         cout << val << endl;
//     }
//     return 0;
// }


#include <iostream>
#include<vector>
using namespace std;
vector<int>Pro(vector<int> nums){
    vector <int> ans (nums.size(),1);
    long long int prefix = 1,suffix=1;
    for(int i =1;i<nums.size();i++){
        prefix = prefix*nums[i-1];
        ans[i]=ans[i]*prefix;
    }
    for(int i =nums.size()-2;i>=0;i--){
        suffix = suffix *nums[i+1];
        ans[i]=ans[i]*suffix;
    }
    
    return ans ;
}
int main(){
    vector<int> vec = {1,2,3,4};
    vector <int> ans = Pro(vec);
    for(int val : ans){
        cout << val << endl;
    }
    return 0;
}

