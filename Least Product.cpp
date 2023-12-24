#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    ll arr[n];
    bool z=0,neg=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            z=1;
        }else if(arr[i]<0){
            neg=1-neg;
        }
    }
    if(z){
        cout<<"0\n";
    }else{
        if(neg==1){
            cout<<"0\n";
        }else{
            cout<<"1\n1 0\n";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t; cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
