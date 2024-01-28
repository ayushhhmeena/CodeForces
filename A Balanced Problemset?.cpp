#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return (b, a%b);
}
void soln(){
    ll x,n; cin>>x>>n;
    ll tp=0,tp1=1;
    vector<ll>v;
    while((tp1*tp1)<=x){
        if(x%tp1==0){
            v.push_back(tp1);
            if(x%tp1!=x){
                v.push_back(x/tp1);
            }
        }
        tp1+=1;
    }
    for(ll i:v){
        if(i>=n){
            tp=max(tp,(x/i));
        }
    }
    cout<<tp<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
