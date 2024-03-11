#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,tp=0; cin>>n;
    vector<ll>v(n);
    for(auto &x:v){
        cin>>x;
    }
    for(ll i=1;i<n-1;++i){
        if((v[i-1]<=v[i+1]) && (v[i]>=2*v[i-1])){
            v[i]-=2*v[i-1];
            v[i+1]-=v[i-1];
            v[i-1]=0;
        }
    }
    for(ll x:v){
        if(x!=0){
            tp++;
        }
    }
    if(tp>0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
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
