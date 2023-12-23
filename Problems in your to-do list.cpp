#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,tp=0; cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=1000){
            tp++;
        }
    }
    cout<<tp<<'\n';
}
int main(){
    ll t; cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
