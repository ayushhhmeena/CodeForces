/*
Author:- Ayush Meena
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll a,b,c; cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}