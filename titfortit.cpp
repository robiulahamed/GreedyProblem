//https://codeforces.com/problemset/problem/1516/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       int ar[n];
       for(int i=0; i<n; i++){
        cin>>ar[i];
       }  
       for(int i=0; i<n-1;  i++){
        int mn = min(ar[i],k);
          ar[i] = ar[i]-mn;
          ar[n-1]=ar[n-1]+mn;
          k=k-mn;
          if(k==0){
            break;
          }
       } 
       for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
       }
       cout<<"\n";
    }
    return 0;
}