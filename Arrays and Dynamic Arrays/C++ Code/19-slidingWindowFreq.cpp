#include<iostream>
#include<vector>
using namespace std;
void logFrequency(vector<int>& arr,int k, int x){
	int n = arr.size();

	int count = 0;
	for(int i=0;i<k;i++){
		if(arr[i]==x){
			count++;
		}	
	}

	for(int j=k;j<n;j++){
		cout<<"COUNT"<<" "<<count<<endl;
		if(arr[j-k] == x){
			count--;
		}
		if(arr[j]==x){
			count++;
		}
	}
	cout<<"COUNT"<<" "<<count<<endl;
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

	int k; // subarray size
	cin>>k;

	int x; // number who freq is to be found
	cin>>x;

	logFrequency(v,k,x);
}