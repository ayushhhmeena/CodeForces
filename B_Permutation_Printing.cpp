#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,ans=1; cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i+=2){
        v[i]=ans++;
    }
    for(ll i=1;i<n;i+=2){
        v[i]=ans++;
    }
    for(ll i=0;i<n;++i){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}