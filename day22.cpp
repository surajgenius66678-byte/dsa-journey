// #include<iostream>
// #include<vector>
// using namespace std;
// void bubbleSort(vector<int> &arr,int n){
//     for(int i=0;i<n-1;i++){
//         bool isSwapped=false;
//         for(int j =0 ; j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwapped=true;
//             }
//         }
//         if(!isSwapped){
//             return;
//         }
//     }
// }
// int main(){
//     vector<int>arr={4,2,1,3,5};
//     int n=arr.size();
//     bubbleSort(arr,n);
//     for(int i =0 ; i<n;i++){
//             cout<< arr[i] << " ";
//         }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void selectioSort(vector<int> &arr,int n){
//     for(int i=0;i<n-1;i++){
//         int ans=i;
//         for(int j =i+1 ; j<n;j++){
//             if(arr[j]<arr[ans]){
//                 ans=j;
//             }
//         }
//         swap(arr[i],arr[ans]);
        
//     }
// }
// int main(){
//     vector<int>arr={4,2,1,3,5};
//     int n=arr.size();
//     selectioSort(arr,n);
//     for(int i =0 ; i<n;i++){
//             cout<< arr[i] << " ";
//         }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int currnum= arr[i];
        int previous=i-1;
        while(previous>=0&&arr[previous]>currnum){
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=currnum;
    }
}
int main(){
    vector<int>arr={4,2,1,3,5};
    int n=arr.size();
    insertionSort(arr,n);
    for(int i =0 ; i<n;i++){
            cout<< arr[i] << " ";
        }
    return 0;
}

