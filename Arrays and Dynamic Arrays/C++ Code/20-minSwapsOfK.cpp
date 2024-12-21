// Finding the minimum number of swaps to group elements 
// with size <=k together
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void minSwapsOfK(vector<int>& arr, int n,int k){
	int countOfLegalElements = 0;
	for(int i=0;i<n;i++){
		if(arr[i] <= k){
			countOfLegalElements++;
		}
	}

	int max_count = 0;
	for(int i=0;i<countOfLegalElements;i++){
		if(arr[i] <= k){
			max_count++;
		}
	}

	int tempMax = max_count;
	for(int j=countOfLegalElements;j<n;j++){
		if(arr[j - countOfLegalElements] <= k){
			tempMax--;
		}
		if(arr[j] <=k){
			tempMax++;
		}

		if(tempMax > max_count){
			max_count = tempMax;
		}
	}

	cout<<"Min Swaps"<<" "<<countOfLegalElements - max_count<<endl;
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

	minSwapsOfK(v,n,k);
}