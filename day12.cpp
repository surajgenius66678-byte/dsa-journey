
// #include<iostream>
// #include<vector>
// using namespace std;
// int container(vector<int>vec){
//     int ans=0;
//     for(int i =0;i<vec.size();i++){
//         for(int j=i+1;j<vec.size();j++){
//             int height= min(vec[j],vec[i]);
//             int width= j-i;
//             int currwater= width*height;
//             ans= max(ans,currwater);
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>vec={1,8,6,2,5,4,8,3,7};
//     cout << container(vec);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int container(vector<int>vec){
    int ans=0;
    int start = 0, end=vec.size()-1;
    while(start<end){
        int height = min(vec[start],vec[end]);
        int width = end-start;
        int currwater = width*height;
        vec[start]>vec[end]?end--:start++;
        ans= max(currwater,ans);
    }
    return ans;
}
int main(){
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    cout << container(vec);
    return 0;
}