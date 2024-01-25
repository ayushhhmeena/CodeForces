#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    string s; cin>>s;
    sort(s.begin(),s.end());
    // cout<<s.size()<<'\n';
    ll size=s.size();
    vector<char>v;
    for(ll i=0;i<size;++i){
        if(s[i]>'0'){
            ll tp=s[i];
            // cout<<tp<<" ";
            v.push_back(tp);
            v.push_back('+');
            //cout<<s[i];
        }
    }
    for(ll i=0;i<size;++i){
        cout<<v[i];
    }
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
