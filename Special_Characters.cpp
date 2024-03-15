#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    if(n%2!=0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
        for(ll i=0;i<n/2;i++){
            cout<<"AAB";
        }
        cout<<'\n';
    }
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
