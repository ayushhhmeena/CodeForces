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
        ll n; cin>>n;
        cout<<(n/3)+(n%3==1)<<" "<<(n/3)+(n%3==2)<<'\n';
    }
    return 0;
}