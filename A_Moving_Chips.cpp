#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,first=0,last=0,cnt=0,cnt1=0; cin>>n;
    ll arr[n];
    //vector<ll>v;
    for(ll i=0;i<n;i++){
        // cin>>arr[i];
        // if(arr[i]==0){
        //     last=i;
        // }else{
        //     cnt1++;
        // }
        // //ll tmp; cin>>tmp;
        // //v.push_back(tmp);
        cin>>arr[i];
        if(arr[i]==1){
            last=i;
            cnt1++;
        }
    }
    for(ll i=0;i<n;i++){
        if(arr[i]==1){
            first=i;
            break;
        }
    }
    for(ll i=first;i<last;i++){
        if(arr[i]==0){
            cnt++;
        }
    }
    if(cnt1==1 || cnt1==0){
        cout<<"0\n";
    }else{
        cout<<cnt<<'\n';
    }
    // cout<<first<<" "<<last<<" "<<cnt<<" "<<cnt1;
    // cout<<'\n'<<'\n';
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}