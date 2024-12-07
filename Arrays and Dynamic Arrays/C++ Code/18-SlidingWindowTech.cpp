#include<iostream>
#include<vector>
using namespace std;
void slidingWindow(vector<int> arr, int n,int k){

	// Find the sum of first K elements
	int sum = 0;
	for(int i=0;i<k;i++){
		sum+=arr[i];
	}	

	// Use the sliding window technique to find the sum of other windows
	for(int j=k;j<n;j++){
		cout<<sum<<endl;	

		sum+=arr[j];
		sum-=arr[j-k];
	}						
	cout<<sum<<endl;
}

int main(){
	
	int n;
	cin>>n;

	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}		
	
	int k;
	cin>>k;	
	
	slidingWindow(v,n,k);	
}