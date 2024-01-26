#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,sum=0; cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;++i){
        ll tmp; cin>>tmp;
        sum=sum+tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),greater<ll>());
    ll half=sum/2,tp=0,cnt=0;
    for(ll i=0;i<n;++i){
        if(tp<=half){
            tp+=v[i];
            cnt++;
        }
    }
    cout<<cnt;
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
