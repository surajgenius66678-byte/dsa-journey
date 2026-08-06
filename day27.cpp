
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int A[6]={1,2,3,6,5,4};
    int n=6;
    int pivot = -1;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            pivot= i;
            break;
        }
    }
    if(pivot==-1){
        reverse(A,A+6);
    }else

    {for(int i=n-1;i>pivot;i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }
    int i= pivot+1,j=n-1;
    while(i<=j){
        swap(A[i],A[j]);
        i++;
        j--;
    }
    for(int i=0;i<6;i++){
        cout << A[i] << " ";
    }}
    return 0;
}