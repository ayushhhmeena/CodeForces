#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,c,tp=0,tp1=0,tp2=0,tp3=0; cin>>n>>c;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        tp+=arr[i];
        tp1+=((arr[i]+2)/2);
    }
    ll tmp=(((c+1)*(c+2))/2);
    tmp-=tp1;
    tmp-=(((c+1)*n)-tp);
    for(ll i=n-1;i>=0;i--){
        if(arr[i]%2){
            tp3++;
            tmp+=(tp3);
        }else{
            tp2++;
            tmp+=(tp2);
        }
    }
    cout<<tmp<<'\n';
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}