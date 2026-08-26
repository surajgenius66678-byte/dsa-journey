#include<iostream>
using namespace std;
void insertionsort(int arr[]){
    for(int i=1;i<5;i++){
        int temp=arr[i];
        int j=i;
        while(j>=1 && temp<arr[j-1]){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
    }
}
int main(){
    int arr[5]={10,5,2,4,7};
    insertionsort(arr);
    for(int i=0;i<5;i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}