#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	int n;
	cin>>n;

	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}


	for (int i = 0; i < n; ++i)
	{
		for(int j=n-1;j>=i;j--){
			int sum = 0;
			for(int k=j;k>=i;k--){
				sum+=v[k];
			}
			cout<<"Sum of subarray startinng from "<<i<<" :"<<sum<<endl;
		}
	}

	cout<<"Time complexity of this approach will be O(n^3)"<<endl;
}


