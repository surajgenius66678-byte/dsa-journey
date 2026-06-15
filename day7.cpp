// //  Arrays 
// # include <iostream>
// using namespace std;
// int main(){
//     // array store one type of data ,it is contigous in nature 
//     int n=5;
//     int marks[n]={1,2,3,4,5,6};
//     int price []={99,105,30};
//     int  u [2];
//     // array index starts form 0
//     cout << marks[0];
//     cout << marks[1];
//     cout << marks[2];
//     cout << marks[3];
//     cout << marks[4];

//     // 0 to size-1
//     cout << marks[5]; // bug on gcc
//     cout << sizeof(marks);
//       for(int i=0;i<6;i++){
//         cout << marks[i];
//       }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main (){
//     int marks[10]={1,6,9,3,7,10,18,12,14,5};
//     int n =  sizeof(marks)/4;
//     int smallest =INT_MAX;
//     int largest = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(marks[i]<smallest){
//             smallest=marks[i];
//         }
//         if(largest <marks[i]){
//             largest= marks[i];
//         }
//     }
//     cout << largest <<"\n";
//     cout << smallest;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int Linear_search(int arr[],int target,int n){
// for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int target =8;
//     int arr[]={4,2,7,8,1,2,5};
//     int n= sizeof(arr)/4;
//     int targetindex =Linear_search(arr,target,n);
//     cout << targetindex;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//      int arr[]={4,2,7,8,1,2,5};
//      int start=0,end =(sizeof(arr)/4)-1;
//      while(start < end){
//         swap(arr[start],arr[end]);
//         start ++ ;
//         end --;
//      }
//      for(int i=0;i<sizeof(arr)/4; i++){
//         cout << arr[i];
//      }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int arr[]={1,4,7,3,6,8};
//     int sum=0;
//     int pro=1;
//     for(int i=0;i<sizeof(arr)/4;i++){
//         sum+=arr[i];
//         pro*=arr[i];
//     }
//     cout << sum << "\n";
//     cout << pro ;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,4,7,3,6,8};
//     int n=sizeof(arr)/4;
//     int smallest=INT_MAX,smallestin=0,largestind=0,largest=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//             smallestin=i;
//         }
//         if(arr[i]> largest){
//             largest=arr[i];
//             largestind=i;
//         }
//     }

//     cout << smallest ;
//     cout << largest ;
//     swap(arr[smallestin],arr[largestind]);
//     cout << "\n";
//     cout << "after swaping";
//     cout << arr[smallestin] ;
//     cout << arr[largestind] ;
//     cout << "\n";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void unique_elements(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool is_unique=true;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]&&i!=j)
//             is_unique=false;
//         }
//         if(is_unique==true){
//             cout << arr[i];
//         }
//     }
// }
// int main(){
//     int arr[]={1,4,7,3,6,8,1,8,3,6,};
//     int n=sizeof(arr)/4;
//     unique_elements(arr,n);

//     return 0;
// }

#include <iostream>
using namespace std;
void common_elements(int arr[],int arr1[],int n,int n1){
    for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            if(arr[i]==arr1[j]){
                cout << arr[i];
            }
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int arr1[7]={1,3,4,5,7,8,9};
    int n1=7;
    common_elements(arr,arr1,n,n1);
    return 0;
}