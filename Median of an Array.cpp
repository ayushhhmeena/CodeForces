#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    ll tp=(n+1)/2,cnt=1;
    // // cout<<v[tp]<<'\n';
    // bool yz=true;
    // while(yz){
    //     v[tp]+=1;
    //     tmp=v[tp];
    //     move++;
    //     sort(v.begin(),v.end());
    //     if(v[tp]==tmp){
    //         yz=false;
    //     }
    // }
    // cout<<move<<'\n';
    for(ll i=tp;i<n;i++){
        if(v[i-1]==v[i]){
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<'\n';
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
