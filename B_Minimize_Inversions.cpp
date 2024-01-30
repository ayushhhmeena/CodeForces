#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    // vector<ll>a,b;
    // for(ll i=0;i<n;++i){
    //     ll tp; cin>>tp;
    //     a.push_back(tp);
    // }
    // for(ll i=0;i<n;++i){
    //     ll tp; cin>>tp;
    //     b.push_back(tp);
    // }
    vector<ll>a(n+1),b(n+1);
    for (ll i=0;i<n+n;i++){
      cin>>(i<n?a[i]:b[a[i-n]]);
    }
    sort(a.begin(),a.end());
    for(auto i:a){
        if(i==0){
            continue;
        }else{
            cout<<i<<" ";
        }
    }
    cout<<'\n';
    for(auto i:b){
        if(i==0){
            continue;
        }else{
            cout<<i<<" ";
        }
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