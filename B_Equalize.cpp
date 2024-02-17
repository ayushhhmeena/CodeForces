#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,tp,sol=1; cin>>n;
    tp=n;
    vector<ll>v(n),v2;
    set<ll>s;
    for(ll i=0;i<n;++i){
        cin>>v[i];
        s.insert(v[i]);
    }
    for(auto i:s){
        v2.push_back(i);
    }
    n=v2.size();
    for(ll i=0;i<n;++i){
        ll tmp=v2[i]+tp-1;
        ll tmp2=upper_bound(v2.begin(),v2.end(),tmp)-v2.begin()-i;
        sol=max(sol,tmp2);
    }
    cout<<sol<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}