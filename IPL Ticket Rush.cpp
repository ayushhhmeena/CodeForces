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
        ll n,m; cin>>n>>m;
        if(n>m || n==m){
            cout<<n-m<<'\n';
        }else{
            cout<<"0"<<'\n';
        }
    }
    return 0;
}