// //  printing every subaaray

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     for(int start = 0;start<n;start++){
//         for(int end=start;end<n;end++){
//             for(int i=start;i<end;i++){
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// cal max subarray sum brute force

// #include<iostream>
// #include <climits> // (for INT_MIN)
// #include <algorithm>//(for max()keyword)
// using namespace std;
// int main(){
//     int arr[]={3,-4,5,4,-1,7,8};
//     int n=7;
//     int maxsum=INT_MIN;
//     for(int start = 0;start<=n;start++){
//         for(int end=start;end<n;end++){
//             int sum=0;
//             for(int i=start;i<=end;i++){
//                 cout << arr[i];
//                 sum+=arr[i];
//             }
//             maxsum=max(sum,maxsum);
//             cout << " ";
//         }
//         cout << "\n";
//     }
//     cout << maxsum;
//     return 0;
// }

// optmized app to cal max sum

// # include <iostream>
// # include <algorithm>
// using namespace std;
// int main(){
//     int arr[]={3,-4,5,4,-1,7,-8};
//     int n=7;
//     int maxsum=INT_MIN;    
//     for(int start=0;start<n;start++){
//         int currsum=0;
//         for(int end=start;end<n;end++){
//             currsum+=arr[end];
//             maxsum = max(maxsum, currsum);

//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int cursum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<sizeof(arr)/4;i++){
        cursum+=arr[i];
        maxsum=max(maxsum,cursum);
        if(cursum < 0){
            cursum=0;
        }
    }
    cout << maxsum;
    return 0;
}