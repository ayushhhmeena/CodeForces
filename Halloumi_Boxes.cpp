#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &x:v){
        cin>>x;
    }
    bool tp=is_sorted(v.begin(),v.end());
    if(k>1 || tp){
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

// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// void soln(){
//     ll n,k; cin>>n>>k;
//     vector<ll>v(n);
//     for(auto &x:v){
//         cin>>x;
//     }
//     bool tp=is_sorted(v.begin(),v.end());
//     if(n==k || tp){
//         cout<<"YES\n";
//     }else{
//         // cout<<"NO\n";
//         if(k==1){
//             cout<<"NO\n";
//         }else if(n==k+1){
//             cout<<"YES\n";
//         }else{
//             cout<<"NO\n";
//         }
//     }
// }
// int main(){
//     ll t=1;
//     cin>>t;
//     while(t--){
//         soln();
//     }
//     return 0;
// }
