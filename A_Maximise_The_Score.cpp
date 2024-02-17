#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    vector<ll> v;
    for(ll i=0;i<(2*n);++i){
        ll tmp; cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(ll i=0;i<(2*n);i=i+2){
        ans+=v[i];
    }
    cout<<ans<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}