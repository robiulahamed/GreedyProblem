//https://codeforces.com/problemset/problem/1176/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
      long long n; cin>>n;
      int c=0;
      while(n>1){
          if(n%2==0){
            n/=2;
            c++;
          }
          else if(n%3==0){
                n/=3;
                n*=2;
                c++;
          }
          else if(n%5==0){
            n/=5;
            n*=4;
            c++;
          }
          else{
            c=-1;
            break;
          }
      }
      cout<<c<<endl;
    }
    return 0;
}