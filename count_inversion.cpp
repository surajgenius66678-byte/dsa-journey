 #include<iostream>
 #include<vector>
 using namespace std;
 int mergesort(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int count=0;
    int i=st,j=mid+1;
    while(i<=mid&& j<=end){
        if(arr[i]>arr[j]){
            temp.push_back(arr[j]);
            j++;
            count+= (mid-i+1);
        }else{
            temp.push_back(arr[i]);
            i++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    
    }
    for(int i=0;i<temp.size();i++){
        arr[i+st]=temp[i];
    }

    return count;
 }
 int merge(vector<int>&arr,int st,int end){
     if(st<end){
        int mid=st+(end-st)/2;
        int leftcount=merge(arr,st,mid);
        int rightcount = merge(arr,mid+1,end);
        int count=mergesort(arr,st,mid,end);
        return leftcount+rightcount+count;
    }
    return 0;
 }
 int main(){
    vector<int>arr={6,3,5,2,7};
    cout<<merge(arr,0,arr.size()-1);
    return 0;
 }