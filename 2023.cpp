#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,b,mul=1; cin>>n>>b;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mul*=arr[i];
    }
    if(2023%mul==0){
        cout<<"YES\n";
        cout<<2023/mul<<" ";
        for(int i=1;i<b;i++){
            cout<<1<<" ";
        }
        cout<<'\n';
    }else{
        cout<<"NO\n";
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
