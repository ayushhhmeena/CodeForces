#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    string s; cin>>s;
    ll cnt=0;
    sort(s.begin(), s.end());
    for(ll i=0;i<s.size();++i){
        if(i<1){
            cnt++;
        }else{
            if(s[i]==s[i-1]){
                continue;
            }else{
                cnt++;
            }
        }
    }
    if(cnt%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
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
