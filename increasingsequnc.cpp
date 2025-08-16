#include<bits/stdc++.h>//https://codeforces.com/contest/1882/problem/A
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;  i<n; i++){
        cin>>v[i];
    }
    int a=0;
    for(int i=0; i<n; i++){
        
        if(i==0){
            if(v[i]==1) a++;
        }
        a++;
        
        if(v[i]==a){
            a++;
        }
        
        
    }
    cout<<a<<endl;
    }
    return 0;
}