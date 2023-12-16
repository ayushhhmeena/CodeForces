/*
Author:- Ayush Meena
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fnc(ll a, ll b){
    cout<<max(a,b)<<'\n';
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        fnc(a,b);
    }
    return 0;
}
