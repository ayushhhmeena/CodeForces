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
        if(x>100){
            cout<<x-10<<'\n';
        }else{
            cout<<x<<'\n';
        }
    }
    return 0;
}