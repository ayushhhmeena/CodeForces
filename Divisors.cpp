#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n; cin>>n;
    for(ll i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<'\n';
        }
    }
    return 0;
}
