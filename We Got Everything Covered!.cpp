#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,k; cin>>n>>k;
    string s;
    for(ll i=0;i<(n*k);++i){
        s+='a'+(i%k);
    }
    cout<<s<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
