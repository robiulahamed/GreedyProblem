//https://codeforces.com/problemset/problem/1474/A




#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int n;cin>>n;
        char  a[100010],b[10010];
        for(int i=0; i<n;  i++){
            cin>>a[i];
        }
        int t = -1;
        for(int i=0; i<n;  i++){
            if(a[i]-'0'+1 == t){
                b[i]='0';
            }
            else{
                b[i]='1';
            }
            t=b[i]-'0'+a[i]-'0';
        }
        for(int  i=0;  i<n;i++){
            cout<<b[i];
        }
        cout<<endl;
    }
    
}