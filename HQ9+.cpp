#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    string s; cin>>s;
    ll cnt=0;
    for(ll i=0;i<s.size();++i){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cnt++;
        }
    }
    if(cnt>0){
        cout<<"YES";
    }else{
        cout<<"NO";
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
