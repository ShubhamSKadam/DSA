#include<iostream>
using namespace std;
char vowels[] = {'a','e','i','o','u'};

bool checkVowel(char x){
    for(int i=0;i<5;i++){
        if(x==vowels[i])
            return true;
    }
    return false;
}
int main(){

    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        int k;
        cin>>k;
        
        int maxVowels = 0;
        for(int i=0;i<k;i++){
            if(checkVowel(str[i]))
                maxVowels++;
        } 
        
        // sliding window 
        int count = maxVowels;
        for(int i=k;i<str.length();i++){
            if(checkVowel(str[i]))
                count++;
            
            if(checkVowel(str[i-k]))
                count--;
            
            if(count > maxVowels)
                maxVowels = count;
        }  
        cout<<maxVowels<<endl;
    } 
}