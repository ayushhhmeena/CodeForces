#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,q; cin>>n;
    vector<ll>v1(n),v2(n);
    for(auto &i:v1){
        cin>>i;
    }
    v2[n-1]=n;
    for(ll i=n-2;i>=0;i--){
        v2[i]=(v1[i]==v1[i+1] ? v2[i+1] : i+1);
    }
    cin>>q;
    while(q--){
        ll l,r; cin>>l>>r;
        l=l-1;
        r=r-1;
        if(v2[l]>r){
            cout<<"-1"<<" "<<"-1\n";
        }else{
            cout<<l+1<<" "<<v2[l]+1<<'\n';
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