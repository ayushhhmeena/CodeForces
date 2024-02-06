#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    string tp;
    vector<ll> v(26,-1),arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        for(char j='z';j>='a';j--){
            if(v[j-'a']==arr[i]-1){
                v[j-'a']++;
                tp+=j;
                break;
            }
        }
    }
    cout<<tp<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}