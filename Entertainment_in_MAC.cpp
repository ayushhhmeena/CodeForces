#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n;
    cin>>n;
    string s,tp,s1,s2; cin>>s;
    tp=s;
    reverse(tp.begin(),tp.end());
    if(s!=tp){
        s1=s+tp;
        s2=tp+s;
        cout<<min(s1,min(s2,s))<<'\n';
    }
    else{
        cout<<s<<endl;
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