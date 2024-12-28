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

	for(int i=0;i<n;i++){
		int sum = 0;
		for(int j=i;j<n;j++){
			sum+=v[j];
			cout<<sum<<" "<<endl;
		}
	}

	cout<<"Time complexity of this approach will be O(n^2"<<endl;
}


