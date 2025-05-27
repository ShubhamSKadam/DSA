#include<iostream>
using namespace std;
int main(){
    
    int n,m,k;
    cin>>n>>m>>k;

    vector<vector<int> > arr(n,vector<int>(m,0)); 
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){ 
            cin>>arr[i][j];
        } 
    }
    
    // prefix sum row wise;
    int i,j;
    for( i=0;i<n;i++){
        for( j=1;j<m;j++){
            arr[i][j] += arr[i][j-1];
        }
    }

    // prefix sum col wise
    
    for(j=0;j<m;j++){
        for(i=1;i<n;i++){
            arr[i][j]+=arr[i-1][j];
        }
    }

    vector<vector<int> > result(n,vector<int>(m,0));
    for( i=0;i<n;i++){
        for( j=0;j<m;j++){

            if(i+k < n){
                if(j+k < m){
                    result[i][j] = arr[i+k][j+k];
                }
                else{
                    result[i][j] = arr[i+k][j];
                }
            }
            else if(j+k < m){
                result[i][j] = arr[i][j+k];
            }
            else{
                result[i][j] = arr[i][j];
            }

            // check for gaps on top and bottom
            if(j-k > 0){
                if(i+k < n){
                    result[i][j] -= arr[i+k][j-k-1];
                }
                else{
                    result[i][j] -= arr[n-1][j-k-1];
                }
            }

            if(i-k > 0){
                if(j+k < m){
                    result[i][j] -= arr[i-k-1][j+k]; 
                }
                else{
                    result[i][j] -= arr[i-k-1][m-1];
                }
            }

            // check if you have deleted the top left element twice
            if(j-k > 0 && i-k > 0){
                result[i][j]+= arr[i-k-1][j-k-1];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){ 
            cout<<result[i][j]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}



