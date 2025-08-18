//https://codeforces.com/problemset/problem/946/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    long long s=0;
    for(int i=0; i<t; i++){
        int x;cin>>x;
        if(x<0) x=abs(x);
        s+=x;
    }
    cout<<s<<endl;
    return 0;
}