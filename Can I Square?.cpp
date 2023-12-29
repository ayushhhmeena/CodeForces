#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,sum=0; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll tp=sqrt(sum);
    double tp2=sqrt(sum);
    //cout<<tp<<" "<<tp2<<'\n';
    if(tp==tp2){
        cout<<"YES\n";
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
