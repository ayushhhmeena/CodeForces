#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    if(k==0){
        cout<<(v[0]==1 ? -1 : 1);
    }else{
        if(v[k-1]==v[k]){
            cout<<"-1";
        }else{
            cout<<v[k-1];
        }
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
