#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    vector<ll>vm(1000001);
    ll tp=1,tmp;
    for(ll i=1;i<=n;i++){
        cin>>tmp;
        while(tmp--){
            vm[tp]=i;
            tp++;
        }
    }
    ll m; cin>>m;
    while(m--){
        cin>>tmp;
        cout<<vm[tmp]<<'\n';
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
