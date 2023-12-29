#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll a,b,c; cin>>a>>b>>c;
    if(a==b){
        cout<<c<<'\n';
    }else if(a==c){
        cout<<b<<'\n';
    }else{
        cout<<a<<'\n';
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
