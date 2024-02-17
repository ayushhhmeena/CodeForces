#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    ll arr[n+1];
    map<ll,ll> m;
    for(ll i=1;i<=n;++i){
        cin>>arr[i];
        m[arr[i]+i]++;
    }
    for(ll i=1;i<=n;++i){
        auto it=--m.end();
        auto [tp,tp1]=*it;
        m.erase(it);
        cout<<tp<<(i==n?"\n":" ");
        if(tp1>1){
            m[tp-1]+=(tp1-1);
        }
    }
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}