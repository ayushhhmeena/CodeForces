/*
Author:- Ayush Meena
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin>>t;
    while(t--){
        ll x; cin>>x;
        if(x>=67 && x<=45000){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}