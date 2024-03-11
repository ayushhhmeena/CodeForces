#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,tp=0,tp1=1; cin>>n;
    string s; cin>>s;
    for(ll i=0;i<n;i++){
        if(i+2<n){
            if(s.substr(i,3)=="map" || s.substr(i,3)=="pie"){
                tp1=0;
                if(i+4<n && s.substr(i,5)=="mapie"){
                    tp++;
                    i=i+3;
                }else{
                    tp++;
                }
            }
        }
    }
    if(tp1==1){
        cout<<"0\n";
    }else{
        cout<<tp<<'\n';
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
