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
        ll x,y; cin>>x>>y;
        if(x>y){
            cout<<"A"<<'\n';
        }else{
            cout<<"B"<<'\n';
        }
    }
    return 0;
}