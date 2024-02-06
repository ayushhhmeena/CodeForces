#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,m,k; cin>>n>>m>>k;
    vector<ll>arr,brr;
    for(ll i=0;i<n;i++){
        ll tp; cin>>tp;
        arr.push_back(tp);
    }
    for(ll i=0;i<m;i++){
        ll tp; cin>>tp;
        brr.push_back(tp);
    }
    set<ll>s1,s2;
    for(ll i=0;i<n;i++){
        if(arr[i]<=k){
            s1.insert(arr[i]);
        }
    }
    for(ll i=0;i<m;i++){
        if(brr[i]<=k){
            s2.insert(brr[i]);
        }
    }
    if(s1.size()<(k/2) || s2.size()<(k/2)){
        cout<<"NO\n";
    }else{
        bool tp=true;
        set<ll>s;
        for(auto i:s1){
            s.insert(i);
        }
        for(auto i:s2){
            s.insert(i);
        }
        for(ll i=1;i<=k;i++){
            if(s.find(i)==s.end()){
                tp=false;
            }
        }
        if(tp){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
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