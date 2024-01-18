#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,tp=0,tp2=0; cin>>n;
    string a,b,c; cin>>a>>b>>c;
    bool sol=false;
        for(ll i=0;i<n;i++) {
            if(c[i]!=a[i] && c[i]!=b[i]){
                sol=true;
                break;
            }
        }
        if(sol==true){
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
