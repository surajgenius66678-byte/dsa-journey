// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,3,3,5,6,7};
//     int i=0,j=5,count=0,target=8;
//     while(i<j){
//         if(arr[i]+arr[j]==target){
//             count ++;
//             i++;
//         }else if(arr[i]+arr[j]>target){
//             j--;
//         }else{
//             i++;
//         }
//     }
//         cout << count;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[7]={1, 3, 5, 7, 9, 11, 13};
    int start=0,end=6,target=7;
    int mid=-1;
    while (start<=end){
     mid=start+((end - start)/2);
    if(arr[mid]==target){
        break;
    }else if(arr[mid]>=target){
        end=mid-1;
    }else{
        start=mid+1;
    }
    }
   cout << mid;
    return 0;
}
