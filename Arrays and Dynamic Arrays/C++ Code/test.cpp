#include<iostream>
using namespace std;

void merge(int *arr,int start,int mid, int end){
    int i=start,j=mid+1,k=0,temp[100];

    while(i<=mid && j<=end){
        if(arr[i] < arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    
    while(i<=mid){
        temp[k++]=arr[i++]; 
    }
    
    while(j<=end){
        temp[k++]=arr[j++]; 
    }
    
    k=0;
    for(i=start;i<=end;i++){
        arr[i] = temp[k++];
    }
}
void mergeSort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){

    int n;
    cin>>n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    mergeSort(arr,0,n-1);
    
}
