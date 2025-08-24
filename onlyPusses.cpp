//https://codeforces.com/problemset/problem/1992/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int n=5;
    while(n--){
        if(a<b && a<c){
            a++;
        }
        else  if(b<c) b++;
        else c++;
    }
    cout<<a*b*c<<endl;

    }
    return 0;
}