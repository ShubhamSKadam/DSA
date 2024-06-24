#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    
    vector<int> v;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
     
      v.push_back(x);
    }
    
    if(n<=1){
        cout<<"0"<<endl;
        return 0;
    }
    
    vector<int> prefixMin(n);
    prefixMin[0] = v[0];
    for(int i=1;i<n;i++){
      prefixMin[i] = min(prefixMin[i-1], v[i]);
    }
 
    vector<int> suffixMax(n);
    suffixMax[n-1] = v[n-1];
    for(int i=n-2;i>=0;i--){
      suffixMax[i] = max(suffixMax[i+1],v[i]);
    }
    
    int maxValue = 0;
    for(int i=0;i<n-1;i++){
      if(prefixMin[i] < suffixMax[i+1]){
        int stockValue = suffixMax[i+1] - prefixMin[i];
        if(stockValue > maxValue){
          maxValue = stockValue;
        }
      }
    }
    
    cout<<maxValue<<endl;
    
    return 0;
}
