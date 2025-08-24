

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int  n;cin>>n;
        string s;
    
        string s2;
        cin>>s2;
        
        s.push_back('1'); string f ="1";
        for(int i=1; i<n; i++){
            if(s2[i]=s2[i-1]){
                if(f=="1"){
                    s.push_back('0');
                    f="0";
                }
                else{
                    s.push_back('1');
                    f="1";
                }

            }
            else{
                if(f=="1"){
                    s.push_back('1');
                    f="1";
                }
                else{
                    s.push_back('0');
                    f="0";
                }
            }
            
        } 
        cout<<s<<endl; 
    }
    
}