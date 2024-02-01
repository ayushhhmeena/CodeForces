#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    string tp="hello";
    string s; cin>>s;
    ll r=0;
    for(ll i=0;i<s.size();++i){
        if(s[i]==tp[r]){
            r++;
            continue;
        }
    }
    if(r==5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
