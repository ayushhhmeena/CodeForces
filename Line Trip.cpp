/* Author:- ayushhhmeena
   CodeForces
*/
 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n,x; cin>>n>>x;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sort(arr.begin(),arr.end());
//         int ans=max(arr[0],(x-arr.back())*2);
//         arr.push_back(x);
//         for(int i=1;i<=n;i++){
//             ans=max(ans,arr[i]-arr[i-1]);
//         }
//         cout<<ans<<'\n';
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,x,max=0; cin>>n>>x;
    // ll arr[n];
    // for(ll i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    vector<ll>v(n);
    for(auto &x:v){
        cin>>x;
    }
    // sort(v.begin(),v.end());
    // vector<ll>v2;
    // v2=v;
    // sort(v2.begin(),v2.end(),greater<ll>());
    // vector<ll>v3;

    // ll tp=0,max=0;
    // for(ll i=0,j=0;i<=x;i++){
    //     tp++;
    //     if(v[j]==i){
    //         max++;
    //         max=tp;
    //         tp=0;
    //         j++;
    //     }
    // }

    for(ll i=0,j=0;i<n;i++){

    }
    cout<<max<<'\n';
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
