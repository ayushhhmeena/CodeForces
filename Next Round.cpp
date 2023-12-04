/* Author:- ayushhhmeena
   CodeForces
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n,k,ans=0; cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
