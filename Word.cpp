#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    string s; cin>>s;
    ll len=s.size();
    ll tp=0,cnt=0;
    cnt=(len/2)+1;
    for(ll i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='Z'){
            tp++;
        }
    }
    if(tp>=cnt){
        for(ll i=0;i<len;i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
    }else{
        for(ll i=0;s[i]!='\0';i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
}
int main(){
    //ll t; cin>>t;
    //while(t--){
        soln();
    //}
    return 0;
}
