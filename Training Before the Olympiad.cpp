#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[0]<<" ";
    ll sum=arr[0],even=(arr[0]%2==0),odd=(arr[0]%2==1);
    for(int i=1;i<n;i++){
        sum+=arr[i];
        even+=(arr[i]%2==0);
        odd+=(arr[i]%2==1);
        ll have=odd/3;
        ll left=(odd-have);
        cout<<sum-have-left%2<<" ";
    }
    cout<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
