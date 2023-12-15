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
        ll a,b; cin>>a>>b;
        if(a==b){
            cout<<a<<'\n';
        }else if(a<b){
            cout<<a<<'\n';
        }else{
            cout<<b<<'\n';
        }
    }
    return 0;
}