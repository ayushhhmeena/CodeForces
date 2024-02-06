#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    string s; cin>>s;
    ll first=0,last=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='B'){
            first=i;
            break;
        }
    }
    for(ll i=n;i>0;i--){
        if(s[i]=='B'){
            last=i;
            break;
        }
    }
    cout<<(last-first)+1<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}