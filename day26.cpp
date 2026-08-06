// #include<iostream>
// using namespace std;
// int main(){int m=3,n=3;
//     int arr1[m]={1,2,3};
//     int arr2[n]={2,5,6};
//     int farr[m+n]={};
//     int i=0,m1=0,n1=0;
//     while(m1<m ){
//         if(arr1[m1]<arr2[n1] ){
//             farr[i]=arr1[m1];
//             m1++;
//         }else{
//             farr[i]=arr2[n1];
//             n1++;
//         }
//         i++;
//     }
//     for(int i=0;i<m+n;i++){
//         cout << farr[i]<< " ";
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int arrA[6]={4,5,6,0,0,0};
    int arrB[3]={1,2,3};
    int m=3,n=3;
    int indx= m+n-1;
    int i= m-1,j=n-1;
    while(i>=0 && j>=0){
        if(arrA[i]>arrB[j]){
            arrA[indx--]=arrA[i--];
        }else{
            arrA[indx--]=arrB[j--];
        }
    }
    while(j>=0){
        arrA[indx--]=arrB[j--];
    }
    for(int i=0;i<6;i++){
        cout << arrA[i];
    }
    return 0;

}