#include<bits/stdc++.h>
#define ll long long
using namespace std;
void sol(){
    ll n,tp=1; cin>>n;
    while(tp*2<=n){
        tp*=2;
    }
    cout<<tp<<'\n';
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}